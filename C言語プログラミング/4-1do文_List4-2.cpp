
/*
	一定範囲の値の読み込み

	読み込んだ整数値に応じてジャンケンの手を表示(0, 1, 2のみを受け入れる)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hand;	/* 手 */

	do{
		printf("手を選んでください【0…グー / 1…チョキ / 2･･･パー】：");
		scanf("%d", &hand);
	} while (hand < 0 || hand > 2);

	printf("あなたは");
	switch (hand)
	{
	case 0: printf("グー");   break;
	case 1: printf("チョキ"); break;
	case 2: printf("パー");   break;
	}
	printf("を選びました。\n");

	getchar();
	return 0;
}