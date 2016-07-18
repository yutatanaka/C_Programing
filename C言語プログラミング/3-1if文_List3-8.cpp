
/*
	剰余の判定

	読み込んだ整数値の最下位桁は５であるか
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("整数を入力してください：");
	scanf("%d", &num);

	if ((num % 10) == 5)
	{
		puts("最下位の桁は5です。");
	}
	else
	{
		puts("最下位の桁は5ではありません。");
	}

	getchar();
	return 0;
}