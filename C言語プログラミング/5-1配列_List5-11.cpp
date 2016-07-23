
/*
	<配列要素の最大値と最小値>

	学生の点数を読み込んで最高点と最低点を表示
	<出力結果>
	5人の点数を入力してください。
	1番：83
	2番：95
	3番：85
	4番：63
	5番：89
	最高点：95
	最低点：63
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5		/* 学生の人数 */

int main()
{
	int i;
	int tensu[NUMBER];		/* NUMBER人の学生の点数 */
	int min, max;			/* 最高点・最低点 */

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; ++i)
	{
		printf("%2d番：", i + 1);
		scanf("%d", &tensu[i]);
	}

	min = max = tensu[0];
	for (i = 0; i < NUMBER; ++i)
	{
		if (tensu[i] > max) max = tensu[i];
		if (tensu[i] < min) min = tensu[i];
	}

	printf("最高点：%d\n", max);
	printf("最低点：%d\n", min);

	getchar();
	getchar();
	return 0;
}