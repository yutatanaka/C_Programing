
/*
	例1.7の1.のプログラムを入力し、コンパイルして実行してください。
*/

#include <stdio.h>

void func1(void);	/* func1()のプロトタイプ */

int main()
{
	printf("私は");
	func1();
	printf("好きです");

	getchar();
	return 0;
}

void func1(void)
{
	printf("Cが");
}