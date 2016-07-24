
/*  
	演習6-4

	int型整数の4乗値を返す関数を作成せよ。
		int pow4(int x) {     }
	関数の内部で、List6-3に示した関数sqrを利用すること
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 4乗値を返す関数 */
int pow4(int x)
{
	return x * x * x * x;
}

int main()
{
	int n1;

	puts("整数を入力してください。");
	printf("整数：");   scanf("%d", &n1);

	printf("入力した数を4乗した数は%dです。\n", pow4(n1));

	getchar();
	getchar();
	return 0;
}