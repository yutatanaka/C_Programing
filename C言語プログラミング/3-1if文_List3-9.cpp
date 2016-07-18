
/*
	関係演算子

	読み込んだ整数値の符号を判定
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;
	
	printf("整数を入力してください：");
	scanf("%d", &no);
	
	if (no == 0)
	{
		puts("その数は0です。");
	}
	else if (no > 0)

	{
		puts("その数は正です。");
	}
	else
	{
		puts("その数は負です。");
	}

	getchar();
	return 0;
}