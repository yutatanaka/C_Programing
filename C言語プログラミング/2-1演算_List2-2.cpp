
/*
	最下位桁の値を求める

	読み込んだ整数値の最も下の桁の数字を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	printf("最も下の桁は%dです。\n", no % 10);

	getchar();
	return 0;
}