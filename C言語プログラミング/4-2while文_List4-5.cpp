
/*
	while文

	読み込んだ整数値を0までカウントダウン
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	while (no >= 0)
	{
		printf("%d\n", no);
		no--;				/* noの値をデクリメント */
	}

	printf("\n");			/* 改行 */

	getchar();
	return 0;
}