// 作：島袋

#include "DxLib.h"
#include "resourceLoad.h"
#include "help.h"
#include "main.h"

extern Image image;
extern Font font;

extern Game game;

Help help;

int mirutame[3];

/********************************
* ヘルプ画面描画
********************************/
void DrawHelp() {
	// 背景表示
	DrawGraph(0, 0, image.title, TRUE);

	// タイトル表示
	DrawStringToHandle(180, 40, "ヘルプ", 0x000000, font.handle_1_128, 0xffffff);

	// 説明表示
	DrawStringToHandle(650, 130, "矢印キーまたは左スティックで切りかえ", 0x000000, font.handle_1_32, 0xffffff);

	// 戻る表示
	DrawStringToHandle(420, 670, "ESCキーまたはAボタンでもどる", 0x000000, font.handle_1_32, 0xffffff);

	// メンバー変数に保存されたステートで表示を分岐

	if (help.state == 0) {
		// コントローラーのヘルプ表示

		// コントローラー画像表示
		DrawExtendGraph(330, 290, 630, 490, image.controller, TRUE);
		//DrawExtendGraph(400, 500, 500, 600, image.controller_s, TRUE);

		// サブタイトル表示
		DrawStringToHandle(700, 40, "操作説明", 0x000000, font.handle_1_64, 0xffffff);
		
		// B Btn
		DrawLine(587, 368, 700, 368, 0x000000);
		DrawStringToHandle(700, 345, "Bボタン：決定", 0x000000, font.handle_1_32, 0xffffff);

		// A Btn
		DrawLine(566, 392, 700, 392, 0x000000);
		DrawStringToHandle(700, 380, "Aボタン：もどる", 0x000000, font.handle_1_32, 0xffffff);

		// Left Stick
		DrawLine(436, 421, 436, 550, 0x000000);
		DrawStringToHandle(280, 550, "左スティック：プレイヤーと、選たくカーソルの移動", 0x000000, font.handle_1_32, 0xffffff);

		// Back Btn
		DrawLine(447, 350, 700, 276, 0x000000);
		DrawStringToHandle(700, 255, "BACKボタン：ゲームを終わる", 0x000000, font.handle_1_32, 0xffffff);

		// Start Btn
		DrawLine(510, 350, 700, 300, 0x000000);
		DrawStringToHandle(700, 290, "STARTボタン：ポーズ", 0x000000, font.handle_1_32, 0xffffff);

		// 項目表示
		
		
		


	}
	else if (help.state) {
		// ゲーム内容のヘルプ表示
		
		// サブタイトル表示
		DrawStringToHandle(700, 40, "ゲーム説明", 0x000000, font.handle_1_64, 0xffffff);




	}

	if (CheckHitKey(KEY_INPUT_LEFT)) {
		help.state = 0;
	};
	if (CheckHitKey(KEY_INPUT_RIGHT)) {
		help.state = 1;
	};

	// 仮
	if (CheckHitKey(KEY_INPUT_ESCAPE)) {
		game.mode = TITLE;
	};

	// 開発用
	DrawCircle(mirutame[0], mirutame[1], mirutame[2], 0xffffff, FALSE);
	DrawFormatString(mirutame[0], mirutame[1], 0xffffff, "%d - %d", mirutame[0], mirutame[1]);
	if (CheckHitKey(KEY_INPUT_W)) {
		mirutame[1]--;
	};
	if (CheckHitKey(KEY_INPUT_S)) {
		mirutame[1]++;
	};
	if (CheckHitKey(KEY_INPUT_A)) {
		mirutame[0]--;
	};
	if (CheckHitKey(KEY_INPUT_D)) {
		mirutame[0]++;
	};
	if (CheckHitKey(KEY_INPUT_Q)) {
		mirutame[2]++;
	};
	if (CheckHitKey(KEY_INPUT_E)) {
		mirutame[2]--;
	};
};