
/*
	２つの整数の大きい方を選ぶ関数を作成しなさい。
	２つのint型引数を取り、大きい方の数値を戻り値として返すこと。
	また、int型の変数x,y,zにそれぞれ数値を入力し、
	作成した関数を使用して最も大きい数値を表示するプログラムを作成しなさい。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Big(int a, int b)
{
	int tmp;
	if (a > b)
	{
		tmp = a;
	}
	else if (a < b)
	{
		tmp = b;
	}
	return tmp;
}

int main()
{
	int x, y, z;
	int max;

	printf("数値１：");	scanf("%d", &x);
	printf("数値２：");	scanf("%d", &y);
	printf("数値３：");	scanf("%d", &z);

	max = Big(x, Big(y, z));

	printf("%d", max);

	getchar();
	return 0;
}