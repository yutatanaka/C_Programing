
/*
	char型の変数aに文字'A'を代入し、
	その変数に演算を施し、小文字'a'にして表示するプログラムを作成しなさい。
*/

#include <stdio.h>

int main()
{
	char a = 'A';

	a = a + 0x20;
	
	printf("%c", a);

	getchar();
	return 0;
}