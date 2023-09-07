
const float UI_BOTTOM_HEIGHT = 120.0f;

bool DrawButton(int x, int y, const char* text) {
	const auto m = MeasureTextEx(font, text, 30.0f, 2.0f).x;
	DrawRectangleLines(x, y, m + 10, 40, WHITE);
	DrawTextEx(font, text, {x+5.0f, y+5.0f}, 30, 2.0f, WHITE);
	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && CheckCollisionPointRec(
		mpo,
		{(float)x, (float)y, m+10.0f, 40.0f}
	)) {
		return true;
	}
	return false;
}

void updateUI() {
	DrawRectangle(0, YMAX - UI_BOTTOM_HEIGHT, XMAX, UI_BOTTOM_HEIGHT, BLACK);
	DrawLine(0, YMAX - UI_BOTTOM_HEIGHT, XMAX, YMAX - UI_BOTTOM_HEIGHT, GRAY);
	if (turn == PLAYER_TURN) {
		if (
			DrawButton(XMAX-300, YMAX - UI_BOTTOM_HEIGHT + 10.0f, "Finish turn")
		) {
			nextTurn();
		}

		int hands_on = -1;
		for (int i = 0; i < Character::power_count; i++)
		{
			const float SCALER = 1.4f;
			const float px = XMAX/2.0f - (Character::power_count*34.0f*SCALER)/2.0f + i*34.0f*SCALER;
			const float py = YMAX - UI_BOTTOM_HEIGHT + 10.0f;
			const Rectangle rect = {
				px,
				py,
				34.0f*SCALER, 34.0f*SCALER
			};
			DrawRectangleLinesEx(rect, 1.0f, WHITE);
			if (player.powers[i] != POWER_NONE) {
				const Rectangle pow_rec = {px+1.0f*SCALER, py+1.0f*SCALER, 32.0f*SCALER, 32.0f*SCALER};
				DrawTexturePro(powtex[player.powers[i]],
					{0.0f, 0.0f, 24.0f, 24.0f},
					pow_rec,
					{0.0f, 0.0f},
					0.0f,
					WHITE
				);
				if (player.powers_count_down[i] > 0) {
					DrawRectangleRec(pow_rec, BLACK.setAlpha(0.2f));
					DrawTextEx(font, TextFormat("%i", (int)player.powers_count_down[i]), {pow_rec.x, pow_rec.y}, 30.0f, 2.0f, WHITE);
				}
				if (hands_on == -1 && CheckCollisionPointRec(mpo, rect)) {
					if (IsMouseButtonDown(MOUSE_RIGHT_BUTTON)) {
						hands_on = i;
					}
					if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
						if (player.selected_power == i) {
							player.clicked_on_power = true;
						} else {
							player.selected_power = i;
						}
					}
				}
			}
		}
		if (hands_on != -1) {
			POWERS[player.powers[hands_on]].drawDescr(mpo);
		}
	} else {
		const auto m = MeasureText("Waiting for AIs.", 30);
		DrawTextEx(font, "Waiting for AIs.", {XMAX/2 - m/2, YMAX - UI_BOTTOM_HEIGHT + 15}, 30, 2, WHITE);
	}
	DrawRectangle(10, YMAX - UI_BOTTOM_HEIGHT + 10, player.life*2, 50, GREEN);
	DrawText(TextFormat("%i/100 HP", player.life), 20, YMAX - UI_BOTTOM_HEIGHT + 20, 30, WHITE);
}

