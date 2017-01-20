
/*  
	整数の２乗を計算する関数を作成しなさい。1つのint型引数を取り、
	結果を戻り値として返すこと。
	また、関数の動作を検証できるようにプログラムを作成しなさい。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiplication(int a)
{
	int value;
	value = a * a;
	return value;
}

int main()
{
	int a, value;

	printf("数値：");	scanf("%d", &a);

	value = Multiplication(a);

	printf("%d", value);

	getchar();
	return 0;
}