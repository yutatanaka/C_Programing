
/*
	一定回数の繰返し

	読み込んだ整数の回数だけ＊を連続表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("正の整数：");
	scanf("%d", &no);

	while (no-- > 0)
		putchar('*');
	putchar('\n');

	getchar();
	return 0;
}