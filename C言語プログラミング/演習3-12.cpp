
/*
	演習3-12

	List3-4のプログラムを、if文ではなくswitch文を用いて書き換えよ。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	switch (no % 2)
	{
	case 0:
		puts("その数は偶数です。");   break;

	case 1:
		puts("その数は奇数です。");   break;

	default :
		puts("その数は対象外です。");   break;
	}


	getchar();
	return 0;
}