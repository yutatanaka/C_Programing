
/*
	キーボードからの読み込み

	読み込んだ整数値をそのまま表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("整数を入力してください：");		
	scanf("%d", &no);								/* 整数値を読み込む */

	printf("あなたは%dと入力しましたね。\n", no);
	getchar();
	return 0;
}