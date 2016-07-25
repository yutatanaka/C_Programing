
/*  
	ファイル有効範囲

	最高点を求める
	<出力結果>
	5人の点数を入力してください。
	1：53
	2：49
	3：21
	4：91
	5：77
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5		/* 学生の人数 */

int tensu[NUMBER];		/* 配列の定義 */
int top();				/* 関数topの関数原型宣言 */

int main()
{
	extern int tensu[];	/* 配列の宣言 */
	int i;

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d：", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("最高点＝%d\n", top());

	return 0;
}

/* ---配列tensuの最大値を返す関数topの関数定義--- */
int top()
{
	extern int tensu[];		/* 配列の宣言 */
	int i;
	int max = tensu[0];

	for (i = 1; i < NUMBER; i++)
	{
		if (tensu[i] > max)
		{
			max = tensu[i];
		}
	}
	return max;
}