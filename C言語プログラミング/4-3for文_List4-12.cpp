
/*
	for文による一定回数の繰返し

	読み込んだ整数の個数だけ＊を連続表示(for文)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("正の整数：");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
	{
		putchar('*');
	}
	putchar('\n');

	getchar();
	return 0;
}