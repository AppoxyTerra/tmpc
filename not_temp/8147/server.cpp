

#include "shared.hpp"

struct Player {
	NBN_Connection* client = NULL;
	Vector2 pos = {0};
	Color color = {0};

	
	inline bool isValid() {
		return client != NULL;
	}

	inline void destroy() {
		if (isValid()) {
			NBN_Connection_Destroy(client);
		}
	}
};
std::array<Player, MAX_CLI> pls;
size_t current_cli_c = 0;
bool run = true; // If no player and used is true, then the server kills itself.


Player* findPlayerByClientId(int id) {
	for (auto &p : pls)
	{
		if (p.isValid()) {
			if (p.client->id == id) {
				return &p;
			}
		}
	}
	return 0;
}

int handleNewConnection() {
	if (current_cli_c == MAX_CLI) {
		return NBN_GameServer_RejectIncomingConnectionWithCode(SERVER_FULL_CODE);
	}
	
	Player& self = pls[current_cli_c++];
	self.client = NBN_GameServer_GetIncomingConnection();
	self.color = Color::random();
	NBN_Stream *ws = NBN_GameServer_GetConnectionAcceptDataWriteStream(self.client);
	NBN_SerializeBytes(ws, &(self.color), sizeof(self.color));

	NBN_GameServer_AcceptIncomingConnection();

	TraceLog(LOG_INFO, "Connection accepted [ID %i]", self.client->id);
	
	return 0;
}

void handleClientDisconnection() {
	NBN_Connection* cli = NBN_GameServer_GetDisconnectedClient();

	TraceLog(LOG_INFO, "Client has disconnected [ID %i]", cli->id);

	Player* p = findPlayerByClientId(cli->id);
	if (p == 0) {
		TraceLog(LOG_ERROR, "Unregistered client disconnected [ID %i] !", cli->id);
		return;
	}

	p->destroy();
	NBN_Connection_Destroy(cli);
	
	current_cli_c--;
	if (current_cli_c == 0) {
		run = false;
	}

	const size_t idx = p - pls.data();
	for (size_t i = idx; i < current_cli_c; i++)
	{
		pls[i] = pls[i+1];
	}
	assert(current_cli_c < MAX_CLI);
	// Erase the copy of t the last player.
	pls[current_cli_c] = Player();
}

void handleUserInfo(OnePosition* msg, Player& sender) {
	sender.pos = msg->pos;
	OnePosition_Destroy(msg);
}

void handleReceivedMessage() {
	NBN_MessageInfo msg_info = NBN_GameServer_GetMessageInfo();

	Player* sender_p = findPlayerByClientId(msg_info.sender->id);

	assert(sender_p != NULL); // Just copied it from the example, it might be a good idea to handle this case.

	Player& sender = *sender_p;

	switch (msg_info.type) {
		case MSG_OnePosition:
			handleUserInfo((OnePosition*)msg_info.data, sender);
			break;
		default:
			TraceLog(LOG_WARNING, "Received message of unknown type: %i", msg_info.type);
			break;
	}
}

int handleGameServerEvent(int ev) {
	switch (ev)
	{
	case NBN_NEW_CONNECTION:
		if (handleNewConnection() < 0)
			return -1;
		break;
	case NBN_CLIENT_DISCONNECTED:
		handleClientDisconnection();
		break;
	
	case NBN_CLIENT_MESSAGE_RECEIVED:
		handleReceivedMessage();
		break;
	
	default:
		break;
	}
	return 0;
}

int broadcastGameState() {
	for (size_t i = 0; i < current_cli_c; i++)
	{
		Player p = pls[i];
		
		AllPositions* ap = AllPositions_Create();
		ap->cli_index = i;
		ap->count = current_cli_c;
		for (size_t i = 0; i < current_cli_c; i++)
		{
			ap->ps[i].pos = pls[i].pos;
		}
		
		NBN_GameServer_SendUnreliableMessageTo(
			p.client,
			MSG_AllPositions,
			ap
		);
	}
	return 0;
}

int main() {
	NBN_UDP_Register();
	NBN_GameServer_Init(protocol_name, port, false);
	if (NBN_GameServer_Start() < 0) {
		TraceLog(LOG_FATAL, "Server failed to start.");
		return 1;
	}

	SERVER_REGISTER_MESSAGE(OnePosition);

	while (run) {
		NBN_GameServer_AddTime(0.016);
		int ev;
		while ((ev = NBN_GameServer_Poll()) != NBN_NO_EVENT) {
			if (ev < 0) {
				TraceLog(LOG_ERROR, "EVENTS: something went wrong.");
				break;
			}
			handleGameServerEvent(ev);
		}

		if (broadcastGameState() < 0) {
			TraceLog(LOG_ERROR, "Error occured while broadcasting game states.");
		}

		if (NBN_GameServer_SendPackets() < 0) {
			TraceLog(LOG_ERROR, "Error occured while flushing the send queue.");
		}

		NBN_GameServerStats stats = NBN_GameServer_GetStats();
		TraceLog(LOG_TRACE, "Upload: %f Bps | Download: %f Bps", stats.upload_bandwidth, stats.download_bandwidth);

		Sleep(16);
	}

	NBN_GameServer_Stop();
}




