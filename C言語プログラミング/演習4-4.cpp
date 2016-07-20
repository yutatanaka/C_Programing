
/*
	演習4-4

	List4-6のプログラムを以下のように書き換えたプログラムを作成せよ。
	・0ではなく1までカウントダウンする
	・入力された値が0以下であるときは、改行を行わない。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	while (no >= 1)
	{
		printf("%d", no--);
	}

	getchar();
	return 0;
}