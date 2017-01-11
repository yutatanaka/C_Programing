
/*
	長さ５の整数型の配列変数aに、すべての成分に０から１００の乱数の値を代入して表示し、以下の条件を満たす数値を表示するプログラム
	(1) ５つの整数の値は、グローバル変数ではない配列変数に入れること
	(2) の配列への値の表示、値の２倍は、それぞれ専用の関数を用いること
	(3) の引数として、整数型のポインタを用いること
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100

/* 引数で受け取った値を２倍にして返す関数 */
void TwiceTimes(int *a)
{
	printf("２倍した値：\n");
	for (int i = 0; i < 5; i++)
	{
		a[i] = a[i] * 2;
		printf("%3d ", a[i]);
	}
}

void ShowArray(int *a)
{
	printf("発生した乱数：\n");
	/* １から１００までの乱数を5回発生させる */
	for (int i = 0; i < 5; i++)
	{
		a[i] = rand() % MAX;
		printf("%3d ", a[i]);
	}
}

int main()
{
	int a[6];
	/* 乱数初期化 */
	srand((unsigned)time(NULL));				
	
	ShowArray(a);
	printf("\n");
	TwiceTimes(a);

	getchar();
	return 0;
}