
/*
	立方体の体積を計算するプログラムを作成してください。
	それぞれの辺の寸法を入力するようユーザーに要求するものとします。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int sum;
	printf("一つ目の辺：");	scanf("%d", &a);
	printf("二つ目の辺：");	scanf("%d", &b);
	printf("三つ目の辺：");	scanf("%d", &c);

	sum = a * b * c;

	printf("立方体の体積は：%d", sum);

	getchar();
	getchar();
	return 0;
}