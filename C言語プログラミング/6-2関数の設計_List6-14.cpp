
/*
	逐次探索
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5	/* 要素数 */
#define FAILED -1	/* 探索失敗 */

/* ---要素数ｎの配列からkeyと一致する要素を探索する--- */
int Search(int v[], int key, int n)
{
	int i = 0;

	v[n] = key;		/* 番兵を格納 */

	while (1)
	{
		if (v[i] == key)
		{
			break;	/* 探索成功 */
		}
		i++;
	}
	return (i < n) ? i : FAILED;
}

int main()
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++)
	{
		printf("vx[%d] :", i);
		scanf("%d", &vx[i]);
	}
	printf("探す値：");
	scanf("%d", &ky);

	if ((idx = Search(vx, ky, NUMBER)) == FAILED)
	{
		puts("\a探索に失敗しました。");
	}
	else
	{
		printf("%dは%d番目のあります。\n", ky, idx + 1);
	}

	getchar();
	getchar();
	return 0;
}