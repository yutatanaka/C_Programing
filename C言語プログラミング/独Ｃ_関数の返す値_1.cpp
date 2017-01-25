
/*
	例1.8の1.のプログラムを入力し、コンパイルして実行してください。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_sqr();			/* プロトタイプ */

int main()
{
	int sqr;

	sqr = get_sqr();
	printf("2乗値：%d", sqr);

	getchar();
	return 0;
}

int get_sqr()
{
	int num;

	printf("数値を入力してください：");
	scanf("%d", &num);
	return num * num;		/* 数値を2乗する */
}