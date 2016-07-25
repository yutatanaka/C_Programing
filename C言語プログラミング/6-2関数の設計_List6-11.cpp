
/*
	配列の受渡し

	英語の点数と数学の点数の最高点を求める

	<出力結果>
	5人の点数を入力してください。
	[1] 英語：53
	　　数学：82
	[2] 英語：49
	　　数学：35
	[3] 英語：21
		数学：72
	[4] 英語：91
		数学：35
	[5] 英語：77
		数学：12
	英語の最高点＝91
	数学の最高点＝82
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5			/* 学生の人数 */

/* ---要素数nの配列ｖの最大値を返す--- */
int max_of(int v[], int n)
{
	int i;
	int max = v[0];

	for (i = 1; i < n; i++)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
	}
	return max;
}

int main()
{
	int i;
	int eng[NUMBER];		/* 英語の点数 */
	int mat[NUMBER];		/* 数学の点数 */
	int max_e, max_m;		/* 最高点 */

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("[%d] 英語：", i + 1);   scanf("%d", &eng[i]);
		printf( "    数学：");			scanf("%d", &mat[i]);
	}

	max_e = max_of(eng, NUMBER);
	max_m = max_of(mat, NUMBER);

	printf("英語の最高点＝%d\n", max_e);
	printf("数学の最高点＝%d\n", max_m);

	getchar();
	getchar();
	return 0;
}