
/*
	入れ子になったif文

	読み込んだ整数値が正であれば偶数/奇数の別を判定して表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	if (no > 0)
	{
		if (no % 2 == 0)
		{
			puts("その数は偶数です。");
		}
		else 
		{
			puts("その数は奇数です。");
		}
	}
	else
	{
		puts("正でない値が入力されました。\a\n");
	}

	getchar();
	return 0;

}