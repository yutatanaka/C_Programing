
/*
	演習5-8

	List5-12の分布グラフの表示を逆順(0～9、10～19、…、100の順)に行うプログラムを作成せよ。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 80

int main()
{
	int i, j;
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

	puts("\n---分布グラフ---");

	for (i = 0; i <= 9; ++i)
	{
		printf("%3d ～%3d :", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; ++j)
		{
			putchar('*');
		}
		putchar('\n');
	}

	printf("      100 :");
	for (j = 0; j < bunpu[10]; ++j)			/* 100点 */
	{
		putchar('*');
	}
	putchar('\n');

	getchar();
	getchar();
	return 0;
}