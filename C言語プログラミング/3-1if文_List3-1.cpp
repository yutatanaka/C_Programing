
/*
	if文・その１

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
		puts("その数は５で割り切れません。");
	}

	getchar();
	return 0;
}