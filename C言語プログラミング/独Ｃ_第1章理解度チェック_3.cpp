
/*
	米国の料理計量用カップ1杯は8オンス(約237cc)に相当します。
	オンスをカップに変換するプログラムを作成してください。
	変換にはo_to_c()という関数を使います。
	この関数はオンス数を受け取りカップ数を返すものとします。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int o_to_c(int);

int main()
{
	int ons;		/* オンス */
	int cup;		/* カップ */
	printf("オンス数を入力してください：");
	scanf("%d", &ons);

	cup = o_to_c(ons);

	printf("%dカップです。\n", cup);

	getchar();
	return 0;
}

int o_to_c(int num)
{
	int cup;
	cup = num / 8;

	return cup;
}