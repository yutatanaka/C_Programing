
/*
	演習1-5
	
	右に示すように、読み込んだ整数値に12を加えた値を表示するプログラムを作成せよ。

	＜出力結果＞
	整数を入力してください：57
	57に12を加えると69です。

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;
	
	printf("整数を入力してください：");
	scanf("%d", &no);

	printf("%dに%dを加えると%d", no, 12, no + 12);
	getchar();
	return 0;
}