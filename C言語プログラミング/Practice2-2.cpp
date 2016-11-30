
/*  
	点数を入力し、合計、最高の点数、最低の点数を表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int tensu[10];		/* 点数配列 */
	int goukei = 0;		/* 合計 */
	int max = 0;		/* 最高点数 */
	int min = 999;		/* 最低点数 */
	int heikin = 0;		/* 平均 */
	int i;

	printf("10回点数を入力してください。\n");
	/* 10回点数を入力して */
	/* 最高得点と最低得点を比較し条件に当てはまれば代入する */
	for (i = 1; i < 11; i++)
	{
		printf("%dつ目の点数を入力をしてください：", i);
		scanf("%d", &tensu[i - 1]);
		goukei += tensu[i - 1];

		/* 最高点数より高ければ代入 */
		if (max < tensu[i - 1])
		{
			max = tensu[i - 1];
		}
		else if (min > tensu[i - 1])
		{
			min = tensu[i - 1];
		}
	}

	/* 平均を求める */
	heikin = goukei / 10;

	/* 合計と平均を表示する */
	printf("合計＝%d 平均＝%d", goukei, heikin);

	/* 最高点数と最低平均を表示する */
	printf("最高点数＝%d　最低点数＝%d", max, min);

	getchar();
	getchar();
	return 0;
}