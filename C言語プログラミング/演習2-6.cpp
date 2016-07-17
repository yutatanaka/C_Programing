
/*
	演習2-6

	右に示すように、身長を整数値として読み込んで、標準体重を実数で表示するプログラムを作成せよ。
	標準体重は(身長‐100) * 0.9によって求め、その小数点以下を1桁だけ表示すること。

	＜出力結果＞

	身長を入力してください：175
	標準体重は67.5です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int y;
	
	printf("身長を入力してください：");  scanf("%d", &y);
	printf("標準体重は%.1f", (y - 100) * 0.9);

	getchar();
	getchar();
	return 0;
}
