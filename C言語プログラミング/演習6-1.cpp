
/*
	演習6-1

	二つのint整数値の小さいほうの値を返す関数を作成せよ。
	int min2(int a, int b){      }

	もちろん、動作を確認するための適切なmain関数なども作成し、完成したプログラムを作ること
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min2(int a, int b)
{	
	int min = a;

	if (b < min)
		min = b;
	else
		min = a;

	return min;
}

int main()
{
	int n1, n2;
	
	puts("二つの整数を入力してください。");
	printf("整数a：");   scanf("%d", &n1);
	printf("整数b：");   scanf("%d", &n2);

	printf("小さいほうの値は%dです。\n", min2(n1, n2));

	getchar();
	getchar();
	return 0;
}