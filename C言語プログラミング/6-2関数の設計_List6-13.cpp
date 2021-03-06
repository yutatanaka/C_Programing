
/*
	線形探索（逐次探索）
	＜出力結果＞
	例１
	vx[0] : 83
	vx[1] : 55
	vx[2] : 77
	vx[3] : 49
	vx[4] : 25
	探す値：49
	49は4番目にあります。
	例２
	vx[0] : 83
	vx[1] : 55
	vx[2] : 77
	vx[3] : 49
	vx[4] : 25
	探す値：16
	♪探索に失敗しました。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5	/* 要素数 */
#define FAILED -1	/* 探索失敗 */

/* ---要素数ｎの配列vからkeyと一致する要素を探索--- */
int Search(const int v[], int key, int n)
{
	int i = 0;

	while (1)
	{
		if (i == n)
			return FAILED;	/* 探索失敗 */
		if (v[i] == key)
			return i;		/* 探索成功 */　
		i++;
	}
}

int main()
{
	int i, ky, idx;
	int array[NUMBER];

	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] : ", i);
		scanf("%d", &array[i]);
	}
	printf("探す値：");
	scanf("%d", &ky);

	idx = Search(array, ky, NUMBER);	/* 要素数NUMBERの配列arrayからkyを探索 */

	if (idx == FAILED)
	{
		puts("\a探索に失敗しました。");
	}
	else
	{
		printf("%dは%d番目にあります。", ky, idx + 1);
	}

	getchar();
	getchar();
	return 0;
}
