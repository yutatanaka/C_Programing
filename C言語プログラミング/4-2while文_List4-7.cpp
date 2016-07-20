
/*
	カウントアップ

	読み込んだ正の整数値までカウントアップ
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
	{
		printf("%d ", i++);			/* iの値を表示した後にインクリメント */
	}
	printf("\n");					/* 改行 */

	getchar();
	return 0;
}