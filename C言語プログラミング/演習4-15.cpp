
/*
	演習4-15

	右に示すように、身長と標準体重の対応表を表示するプログラムを作成せよ。
	なお表示する身長の範囲(開始値、終了値、増分)は整数値として読み込んで、
	標準体重は小数部を2桁表示すること

	何cmから：155
	何cmまで：190
	何cmごと：5
	155cm  49.50kg
	160cm  54.00kg
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int n, min, max;

	printf("何cmから：");   scanf("%d", &min);
	printf("何cmまで：");   scanf("%d", &max);
	printf("何cmごと：");   scanf("%d", &n);


	for (i = min; i < max; i += n)
	{
		min += n;
		printf("%dcm  %.2f\n", min, (min  - 100) * 0.9);
	}

	getchar();
	getchar();
	return 0;
}