
/*
	1．月面の重力は地球の約17％です。自分の体重を入力すると月面での実効体重を計算するプログラムを作成してください。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputNum();

int main()
{
	int heavy = 0;

	heavy = InputNum();

	heavy = heavy * 0.17;

	printf("%d", heavy);

	getchar();
	return 0;
}

/* 入力関数 */
int InputNum()
{
	int num;
	printf("体重を入力してください：");
	scanf("%d", &num);

	return num;
}