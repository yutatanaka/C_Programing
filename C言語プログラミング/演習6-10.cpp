
/*
	演習6-10

	要素数がnであるintの配列v2の並びを反転したものを配列v1に格納する関数を作成せよ。
		void intary_rcpy(int v1[], conts int v2[], int n) {    }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5

void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;
	int tmp;

	/* 配列v2を配列v1に格納 */
	for (i = 0; i < n; i++)
	{
		v1[i] = v2[i];
	}
	
	/* 配列の要素数を反転させる */
	for (i = 0; i < n / 2; i++)
	{
		tmp = v1[i];
		v1[i] = v1[n - i - 1];
		v1[n - i - 1] = tmp;
	}
}

int main()
{
	int i;
	int array[NUMBER];
	int revers_array[NUMBER];

	printf("配列の要素を入力してください。\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] :", i);	scanf("%d", &array[i]);
	}

	intary_rcpy(revers_array, array, NUMBER);

	for (i = 0; i < NUMBER; i++)
	{
		printf("revers_array[%d] = %d\n", i, revers_array[i]);
	}

	getchar();
	getchar();
	return 0;
}