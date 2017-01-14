
/*
	char型の変数a, b, cに文字'A', 'B', 'C'を代入し、
	3文字連続して"ABC"と表示するプログラムを作成しなさい
*/

#include <stdio.h>

int main()
{
	char a = 'A';
	char b = 'B';
	char c = 'C';
	
	printf("%c%c%c", a, b, c);
	
	getchar();
	return 0;
}