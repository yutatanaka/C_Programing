
/*
	非ゼロの判定

	読み込んだ整数値はゼロかどうか
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("整数を入力してください；");   scanf("%d", &num);

	if (num)
	{
		puts("その数はゼロではありません。");
	}
	else
	{
		puts("その数はゼロです。");
	}

	getchar();
	return 0;
}