#include "DxLib.h"
#include "resourceLoad.h"
#include "main.h"
#include"init.h"

extern Image image;
extern Font font;

extern Game game;

Init ini;

/********************************
* ゲーム初期化
********************************/
void GameInit() {
	game.mode = MAIN;

	ini.StartTime = GetNowCount();
};