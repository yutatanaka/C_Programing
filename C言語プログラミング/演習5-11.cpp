
/*
	演習5-11

	6人の2科目(国語・数学)の点数を読み込んで、科目ごとの合計点と平均点、
	学生ごとの平均点を求めるプログラムを作成せよ。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, k = 0;
	int students[6];
	int tensu[6][6];
	int sum_kokugo = 0, sum_sugaku = 0, sum_students = 0;

	puts("国語、数学の順に点数を入力してください。");
	for (i = 0; i < 6; i++)
	{
		printf("%d人目\n", i + 1);
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &tensu[i][j]);
		}
	}
	for (i = 0; i < 6; i++)
	{
		sum_kokugo = sum_kokugo + tensu[i][0];
	}
	for (i = 0; i < 6; i++)
	{
		sum_sugaku = sum_sugaku + tensu[i][1];
	}
	for (i = 0; i < 6; i++)
	{
		sum_students = 0;
		for (j = 0; j < 2; j++)
		{
			sum_students = sum_students + tensu[i][j];
		}
		students[i] = sum_students;
	}

	printf("国語 合計点：%d  平均点：%d\n", sum_kokugo, sum_kokugo / 2);
	printf("数学 合計点：%d  平均点：%d\n", sum_sugaku, sum_sugaku / 2);
	for (i = 0; i < 6; i++)
	{
		printf("%d人目 合計点：%d 平均点 ：%d\n", i + 1, students[i], students[i] / j);
	}


	getchar();
	getchar();
	return 0;
}