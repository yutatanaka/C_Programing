
/*
	演習6-14
	静的記憶域期間が与えられたdouble型配列の全要素が0.0で初期化されることを確認するプログラムを作成せよ。
*/

#include <stdio.h>

int main()
{
	int i;
	static double array[5];

	for (i = 0; i < 5; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}

	getchar();
	return 0;
}