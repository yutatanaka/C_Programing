
/*  
	演習6-8

	要素数がnであるintの配列vの要素の最小値を返す関数を作成せよ。
	int min_of(const int v[], int n) {     }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5

/* 最小値を返す関数 */
int min_of(const int v[], int n)
{
	int i;
	int min = v[0];

	for (i = 1; i < n; i++)
	{
		if (min > v[i])
		{
			min = v[i];
		}
	}
	return min;
}

int main()
{
	int i;
	int array[NUMBER];
	int min_array;

	printf("5つの整数を入力してください。\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] :", i);	scanf("%d", &array[i]);
	}
	
	min_array = min_of(array, NUMBER);

	printf("この配列の要素の最小値は%dです。", min_array);

	getchar();
	getchar();
	return 0;
}