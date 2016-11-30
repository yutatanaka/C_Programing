
/*
	点数を10件入力し、その合計を表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int tensu[10] = {0};
	int goukei = 0;
	int heikin = 0;
	int i;
	
	printf("点数を10回入力してください。\n");

	/* 点数を入力し足すを10回繰り返す */
	for (i = 1; i < 11; i++)
	{
		printf("%dつ目の点数を入力してください：", i);	scanf("%d", &tensu[i - 1]);
		goukei += tensu[i - 1];
	}

	/* 平均を求める */
	heikin = goukei / 10;

	/* 合計と平均を表示 */
	printf("合計＝%d  平均＝%d\n", goukei, heikin);

	getchar();
	getchar();
	return 0;
}