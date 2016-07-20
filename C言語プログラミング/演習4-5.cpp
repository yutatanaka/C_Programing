
/*
	演習4-5

	List4-7のプログラムを以下のように書き換えたプログラムを作成せよ。
	・0からではなく1からのカウントアップを行う。
	・入力された値が0以下であるときは、改行を行わない。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	i = 1;
	while (i <= no)
	{
		printf("%d ", i++);					/* iの値を表示した後にインクリメント */

		if (i <= 0)
			printf("\n");						/* 改行 */
	}

	getchar();
	return 0;
}