
/* 
	例1.7の2.のプログラムを入力し、コンパイルして実行してください
	3つの関数を持つプログラム
*/

#include <stdio.h>

void func1(void);		/* プロトタイプ */
void func2(void);

int main()
{
	func2();
	printf("3");

	getchar();
	return 0;
}

void func2()
{
	func1();
	printf("2 ");
}

void func1()
{
	printf("1 ");
}