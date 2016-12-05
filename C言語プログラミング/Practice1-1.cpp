
/*
	国語、社会、理科の3科目の点数を入力し、3科目の合計と平均を表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SUBJECT 3					/* 合計科目数 */

/* 最初に点数を入力する為の関数 */
void Print(int &a, int &b, int &c)
{
	printf("国語の点数＝");	scanf("%d", &a);
	printf("社会の点数＝");	scanf("%d", &b);
	printf("理科の点数＝");	scanf("%d", &c);
}

/* 合計点を求める関数 */
int Sum(int &a, int &b, int &c, int &sum)
{
	sum += a;
	sum += b;
	sum += c;
	return sum;
}

/* 平均点を求める関数 */
int Average(int &sum, int &avarage)
{
	avarage = sum / SUBJECT;

	return avarage;
}

int main()
{
	int kokugo = 0;					//	国語
	int shakai = 0;					//　社会
	int rika = 0;					//　理科
	int goukei = 0, heikin = 0;		//　合計と平均
	
	Print(kokugo, shakai, rika);
	Sum(kokugo, shakai, rika, goukei);
	Average(goukei, heikin);
	printf("合計点＝%d 平均点＝%d",goukei, heikin);


	getchar();
	getchar();
	return 0;
}