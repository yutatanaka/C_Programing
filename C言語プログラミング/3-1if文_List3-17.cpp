
/*
	論理演算子

	読み込んだ月の季節を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;					/* 月 */
	printf("何月ですか：");
	scanf("%d", &month);

	if (month >= 3 && month <= 5)
	{
		printf("%d月は春です。\n", month);
	}
	else if (month >= 6 && month <= 8)
	{
		printf("%d月は夏です。\n", month);
	}
	else if (month >= 9 && month <= 11)
	{
		printf("%d月は秋です。\n", month);
	}
	else if (month == 1 || month == 2 || month == 12)
	{
		printf("%d月は冬です。\n", month);
	}
	else
	{
		printf("%d月なんてありませんよ。\a\n", month);
	}

	getchar();
	return 0;
}