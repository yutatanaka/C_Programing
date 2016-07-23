
/*
	演習5-9

	右に示すように、演習5-8の分布ｸﾞﾗﾌの表示を縦方向に向かうプログラムを作成せよ。
	<出力結果>
	                   *
		      *  *     *     *
        *  *  *  *  *  *  *  *  *  *
	 0 10 20 30 40 50 60 70 80 90 100
	----------------------------------
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 80

int main()
{
	int i, j, max;
	int num;				/* 実際の人数 */
	int tensu[NUMBER];		/* 学生の点数 */
	int bunpu[11] = { 0 };	/* 点数の分布 */

	printf("人数を入力してください :");
	do
	{
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
		{
			printf("\a1～%dで入力してください：", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力してください。\n", num);

	for (i = 0; i < num; ++i)
	{
		printf("%2d番 :", i + 1);
		do
		{
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
			{
				printf("\a1～100で入力してください：");
			}

		} while (tensu[i] < 0 || tensu[i] > 100);

		bunpu[tensu[i] / 10]++;
	}

	putchar('\n');


	max = bunpu[0];
	for (i = 1; i < 10; i++)
	{
		if (max < bunpu[i])
		{
			max = bunpu[i];
		}
	}

	for (i = max; i > 0; i--)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == bunpu[j])
			{
				printf("*  ");
				bunpu[j]--;
			}
			else
			{
				printf("   ");
			}
		}
		putchar('\n');
	}
	
	printf("----------------------------------\n");
	printf(" 0 10 20 30 40 50 60 70 80 90 100");

	getchar();
	getchar();
	return 0;
}