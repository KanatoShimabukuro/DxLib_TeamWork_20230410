// 作：島袋

#include "DxLib.h"
#include "resourceLoad.h"

extern Image image;
extern Font font;

/********************************
* ヘルプ画面描画
********************************/
void drawHelp() {
	DrawGraph(0, 0, image.title, TRUE);
	DrawExtendGraph(0, 0, 200, 100, image.controller, TRUE);
	DrawExtendGraph(0, 0, 100, 100, image.controller_s, TRUE);
	SetFontSize(10);
	DrawStringToHandle(340, 140, "操作説明", 0x000000, font.handle_1_64, 0xffffff);

	
};