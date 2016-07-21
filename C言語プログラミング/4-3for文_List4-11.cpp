
/*
	for文

	読み込んだ正の整数値までカウントアップ(for文)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	for (i = 0; i <= no; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');

	getchar();
	getchar();
	return 0;
}