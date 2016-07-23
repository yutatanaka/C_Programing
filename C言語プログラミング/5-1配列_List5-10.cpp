
/*
	オブジェクト形式マクロ

	学生の点数を読み込んで合計点と平均点を表示(人数をマクロで定義)
	<出力結果>
	5人の点数を入力してください。
	1番：83
	2番：95
	3番：85
	4番：63
	5番：89
	合計点：415
	平均点：83.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5			/* 学生の人数 */

int main()
{
	int i;
	int tensu[7];			/* NUMBER人の学生の点数 */
	int sum = 0;			/* 合計点 */

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; ++i)
	{
		printf("%2d番：", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("合計点：%5d\n", sum);
	printf("平均点：%5.1f\n", (double)sum / NUMBER);

	getchar();
	getchar();
	return 0;
}

