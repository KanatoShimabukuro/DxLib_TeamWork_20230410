#include "DxLib.h"
#include "resourceLoad.h"
#include <string>
#include "Apple.h"
#include "main.h"
#include"UI.h"
#include "ranking.h"
#include "PadInput.h"

extern Image image;
extern Font font;

extern Game game;

using std::string;
using std::to_string;

int RED_AppleCount = 0;
int BLUE_AppleCount = 0;
int GOLD_AppleCount = 0;
int POISON_AppleCount = 0;
int AppleScore = 0;

//int RED_AppleCount = 12345;


/********************************
* リザルト画面
********************************/

void DrawResult() { // 未完成

	RED_AppleCount		= ReturnRA();
	BLUE_AppleCount		= ReturnBL();
	GOLD_AppleCount		= ReturnGL();
	POISON_AppleCount	= ReturnPO();
	AppleScore			= ReturnScore();

	std::string RED = "赤リンゴ：" + std::to_string(RED_AppleCount);
	std::string BLUE = "青リンゴ：" + std::to_string(BLUE_AppleCount);
	std::string GOLD = "黄リンゴ：" + std::to_string(GOLD_AppleCount);
	std::string POISON = "毒リンゴ：" + std::to_string(POISON_AppleCount);
	std::string SCORE = "スコア：" + std::to_string(AppleScore);

	// 背景表示
	DrawGraph(0, 0, image.title, TRUE);

	DrawStringToHandle(320, 70, "RESULT", 0x000000, font.handle_1_64, 0xffffff);

	DrawBox(300, 160, 800, 550, 0xFDF5E6, TRUE);
	DrawBox(300, 160, 801, 551, 0x000000, FALSE);

	//赤　青　黄　毒　スコア
	DrawStringToHandle(320, 180, RED.c_str(), 0x000000, font.handle_1_64, 0xffffff);
	DrawStringToHandle(320, 250, BLUE.c_str(), 0x000000, font.handle_1_64, 0xffffff);
	DrawStringToHandle(320, 320, GOLD.c_str(), 0x000000, font.handle_1_64, 0xffffff);
	DrawStringToHandle(320, 390, POISON.c_str(), 0x000000, font.handle_1_64, 0xffffff);
	DrawStringToHandle(320, 460, SCORE.c_str(), 0x000000, font.handle_1_64, 0xffffff);

	//カウント表示
	//DrawFormatStringFToHandle(660, 180,  0x000000, font.handle_1_64,  "%d", RED_AppleCount);
	
	// 次へ
	DrawStringToHandle(530, 670, "Bボタンですすむ", 0x000000, font.handle_1_32, 0xffffff);
	// 仮、ボタンで分岐させる処理
	if (JudgeReleaseButton(XINPUT_BUTTON_B) == 1) {
		if (GetRankingFlg() == 1) {
			game.mode = INPUTNAME;
		}
		else {
			game.mode = RANKING;
		}
	};
	// キーボード対応
	if (CheckHitKey(KEY_INPUT_SPACE)) {
		if (GetRankingFlg() == 1) {
			game.mode = INPUTNAME;
		}
		else {
			game.mode = RANKING;
		}
	};

	//WaitTimer(3000);
};