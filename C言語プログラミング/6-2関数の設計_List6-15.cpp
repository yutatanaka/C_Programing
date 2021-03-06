
/*
	逐次探索その３
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5
#define FAILED -1

/* ---要素数ｎの配列ｖからkeyと一致する要素を探索--- */
int Search(int v[], int key, int n)
{
	int i;

	v[n] = key;		/* 番兵を格納 */

	for (i = 0; v[i] != key; i++)
	{
		;
	}
	return (i < n) ? i : FAILED;
}

int main()
{
	int i, ky, idx;
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++)
	{
		printf("vx[%d] :", i);
		scanf("%d", &vx[i]);
	}

	printf("探す値：");
	scanf("%d", &ky);

	if ((idx = Search(vx, ky, NUMBER)) == FAILED)
		puts("\a探索に失敗しました。");
	else
		printf("%dは%d番目にあります。\n", ky, idx + 1);

	getchar();
	getchar();
	return 0;
}