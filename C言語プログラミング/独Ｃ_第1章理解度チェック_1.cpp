
/*
	1．月面の重力は地球の約17％です。自分の体重を入力すると月面での実効体重を計算するプログラムを作成してください。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputNum();

int main()
{
	float weight = 0;

	weight = InputNum();

	weight = weight * 0.17;

	printf("%d", weight);

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