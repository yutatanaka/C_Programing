
/*
	前置増分演算子と前置減分演算子

	指示された個数だけ整数を読み込んで合計値と平均値を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;				/* 合計値 */
	int num, tmp;

	printf("整数は何個ですか：");
	scanf("%d", &num);

	while (i < num)
	{
		printf("No.%d:", ++i);	/* iの値をインクリメントした後に表示 */
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("合計値：%d\n", sum);
	printf("平均値：%.2f\n", (double)sum / num);

	getchar();
	return 0;
}