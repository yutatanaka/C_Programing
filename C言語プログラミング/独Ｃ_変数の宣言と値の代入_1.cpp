
/*
	変数の宣言と値の代入
	例1.3の1.と2.のプログラムを入力し、コンパイルして実行してください
*/

#include <stdio.h>

int main()
{
	/* 1. */
	/*
	int num;

	num = 100;
	printf("値は %d", num);
	*/

	/* 2. */
	char ch;
	float f;
	double d;

	ch = 'X';
	f = 100.123;
	d = 123.009;

	printf("chは %c\n", ch);
	printf("fは %f\n", f);
	printf("dは %f\n", d);

	getchar();
	return 0;
}

