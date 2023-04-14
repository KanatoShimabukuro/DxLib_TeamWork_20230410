#include"Title.h"
#include"resourceLoad.h"

extern Image image;
extern Font font;

/********************************
* タイトル
********************************/
void DrawTitle() {
	// 背景表示
	DrawGraph(0, 0, image.title, TRUE);

	// タイトル表示
	DrawStringToHandle(350, 150, "りんごおとし", 0x000000, font.handle_1_128, 0xffffff);

	// ゲームモードセレクトの項目
	DrawStringToHandle(630, 350, "スタート", 0x000000, font.handle_1_32, 0xffffff);
	DrawStringToHandle(630, 400, "ヘルプ", 0x000000, font.handle_1_32, 0xffffff);
	DrawStringToHandle(630, 450, "ランキング", 0x000000, font.handle_1_32, 0xffffff);
	DrawStringToHandle(630, 500, "終わる", 0x000000, font.handle_1_32, 0xffffff);

	// ゲームモードセレクトのカーソル
	DrawStringToHandle(570, 350, "→", 0x000000, font.handle_1_32, 0xffffff);

	// ゲームモードセレクト処理追加予定

	// BGM SE ここに書くか、bgm.cppで画面別に制御させる？

};

// らいやごめん、、







//int Image;				//背景画像

int SoundTitle;			//タイトルの音楽
int SoundMoveCorsor;	//カーソル移動の効果音
int	SoundDecision;		//決定の効果音

//int LoadImages(void)
//{
//	if ((Image = LoadGraph("images/TitleImage.png")) == -1)return -1;
//}
int FontHandle;

//int LoadImages(void)
//{
//	LPCSTR font_path = "Resources/font/しょかきうたげ（無料版）.ttf"; // 読み込むフォントファイルのパス
//
//	if (AddFontResourceEx(font_path, FR_PRIVATE, NULL) > 0) {
//	}
//	else {
//		// フォント読込エラー処理
//		MessageBox(NULL, "フォント読込失敗", "", MB_OK);
//	}
//
//	//if ((Image = LoadGraph("images/TitleImage.png")) == -1)return -1;
//}

//int LoadSounds(void)
//{
//
//}



//void DrawTitle(void)
//{
//
//	//FontHandle= CreateFontToHandle("しょかきうたげ（無料版）", 128,9 , DX_FONTTYPE_EDGE);
//
//	//DrawGraph(0, 0, Image, TRUE);
//
//	///*ChangeFont("しょかきうたげ（無料版）");
//	//ChangeFontType(DX_FONTTYPE_EDGE);
//	//SetFontSize(128);
//	//DrawString(340, 140, "りんごおとし", 0x000000, 0xffffff);*/
//
//	//DrawStringToHandle(340, 140, "りんごおとし", 0x000000, FontHandle, 0xffffff);
//	//	
//
//	//DrawGraph(0, 0, image.title, FALSE);
//}