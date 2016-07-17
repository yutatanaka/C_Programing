
/*
	偶数と奇数の判定

	読み込んだ整数値は奇数であるか偶数であるか
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;
	
	printf("整数を入力してください：");
	scanf("%d", &no);

	if (no % 2)
	{
		puts("その数は奇数です。");
	}
	else
	{
		puts("その数は偶数です。");
	}

	getchar();
	return 0;
}