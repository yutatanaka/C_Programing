
/*
	点数を入力する。点数が100～80のとき評価を"A"
	79～60のとき"B"
	59～0のとき"C"
	を表示する
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int tensu;
	while (1)
	{
		printf("点数を入力してください：");	scanf("%d", &tensu);

		if (tensu >= 80 && tensu <= 100)
		{
			printf("点数:%d 評価:A\n", tensu);
			break;
		}
		else if (tensu >= 60 && tensu <= 79)
		{
			printf("点数:%d 評価:B\n", tensu);
			break;
		}
		else if (tensu >= 0 && tensu <= 59)
		{
			printf("点数:%d 評価:C\n", tensu);
			break;
		}
		else
		{
			continue;
		}
	}
	getchar();
	return 0;
}