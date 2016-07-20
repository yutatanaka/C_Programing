
/*
	減分演算子を用いた手短な表現

	読み込んだ整数値を0までカウントダウン(その２)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d", no--);					/* noの値を表示した後にデクリメント */
	printf("\n");							/* 改行 */

	getchar();
	return 0;
}