
/*
	演習6-11

	要素数ｎの配列ｖ内のkeyと等しい全要素の添字を配列idxに格納する関数Search_idxを作成せよ。
	返却するのはkeyと等しい要素の個数とする。
		int Search_idx(const int v[], int idx[], int key, int n);
	例えば、vに受け取った配列の要素が{1, 7, 5, 7, 2, 4, 7}でkeyが7であれば、idxに{1, 3, 6}を格納した上で3を返却する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 7

int Search_idx(const int v[], int idx[], int key, int n)
{
	int i;

	for (i = 0; i < NUMBER; i++)
	{
		if (v[i] == key)
		{
			idx[n] = i;
			n++;
		}
	}
	return n;
}

int main()
{
	int i, key, n = 0;
	int v[NUMBER];
	int idx[NUMBER];

	for (i = 0; i < NUMBER; i++)
	{
		printf("v[%d] :", i);
		scanf("%d", &v[i]);
	}
	printf("探す値：");
	scanf("%d", &key);

	n = Search_idx(v, idx, key, n);

	printf("keyと等しい要素の数は%dで、idxの中身は{", n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", idx[n - 1]);
			break;
		}
		printf("%d, ", idx[i]);
	}
	printf("}です。\n");

	getchar();
	getchar();
	return 0;
}