
/*
	例1.8の2.のプログラムを入力し、コンパイルして実行してください。
*/

#include <stdio.h>

void func1();			/* プロトタイプ宣言 */

int main()
{
	func1();

	getchar();
	return 0;
}

void func1()
{
	printf("これは表示される\n");
	return;
	printf("これは決して表示されない");
}