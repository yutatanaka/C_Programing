
/*
	if文・その２

	読み込んだ整数値は５で割り切れないか
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	if (no % 5)
	{
		puts("その数は5で割り切れません。");
	}
	else
	{
		puts("その数は5で割り切れます。");
	}

	getchar();
	return 0;
}