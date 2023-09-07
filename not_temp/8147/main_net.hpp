

void handleConnection() {
	NBN_Stream* rs = NBN_GameClient_GetAcceptDataReadStream();

	Color color = {0};
	NBN_SerializeBytes(rs, &color, sizeof(Color));
	local_player.color = color;
	local_player.pos = {0};
	connected = true;
}
void handleDisconnection() {
	int code = NBN_GameClient_GetServerCloseCode();

	TraceLog(LOG_INFO, "Disconnected from server [CODE %i]", code);

	connected = false;
}
void handleReceivedMessage() {
	NBN_MessageInfo msg_info = NBN_GameClient_GetMessageInfo();

	if (msg_info.type != MSG_AllPositions) {
		TraceLog(LOG_ERROR, "Received message of unknown type: %i.", msg_info.type);
		return;
	}

	AllPositions* ap = (AllPositions*)msg_info.data;
	for (size_t i = 0; i < ap->count; i++)
	{
		if (ap->cli_index == i)
			continue;
		pls[i].pos = ap->ps[i].pos;
		pls[i].spawned = true;
	}
	for (size_t i = ap->count; i < MAX_CLI; i++) {
		pls[i].spawned = false;
	}
	
}

void handleGameClientEvent(int ev) {
	switch (ev)
	{
	case NBN_CONNECTED:
        // We are connected to the server
        handleConnection();
        break;

    case NBN_DISCONNECTED:
        // The server has closed our connection
        handleDisconnection();
        break;

    case NBN_MESSAGE_RECEIVED:
        // We received a message from the server
        handleReceivedMessage();
        break;
    }
}

int SendUpdates() {
	OnePosition* msg = OnePosition_Create();
	msg->pos = local_player.pos;
	if (NBN_GameClient_SendUnreliableMessage(MSG_OnePosition, msg) < 0) {
		return -1;
	}
	
	return 0;
}
