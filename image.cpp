#include "image.h"

// 画像を読み込む関数
int LoadImage(Image& image, const char* filename) {
	if ((image.handle = LoadGraph(filename)) == -1) return -1;
	return 0;
}

// 画像を描画する関数
void DrawImage(Image& image, int x, int y) {
	DrawGraph(x, y, image.handle, TRUE);
}
