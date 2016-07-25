
/*
	演習6-9

	要素数がｎであるintの配列vの要素の並びを反転する関数を作成せよ。
		void rev_intary(int v[], int n) {     }
	List5-8と演習5-5を参考にすること
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 7

void rev_intary(int v[], int n)
{
	int i;
	int tmp = 0;

	for (i = 0; i < NUMBER / 2; i++)
	{
		tmp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = tmp;
	}
}

int main()
{
	int i;
	int array[NUMBER];
	
	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] :", i);	scanf("%d", &array[i]);
	}

	rev_intary(array, NUMBER);
	printf("反転しました。\n");

	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}

	getchar();
	getchar();
	return 0;
}
