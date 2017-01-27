
/*
	入力された米国ドルを英国ポンドに換算するconvert()という関数を作成し、
	その関数を使って換算後の金額を表示するプログラムを作成してください(為替レートは１ポンドを２ドルと仮定します)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 米国ドルを英国ポンドに換算するコンバーター */
int Convert(int *dollar)
{
	int value;	
	value = *dollar * 0.5;
	return value;
}

int main()
{
	int dollar;
	int pound;
	
	printf("何ドルか入力してください：");	scanf("%d", &dollar);
	pound = Convert(&dollar);
	printf("%dポンドです。\n", pound);

	getchar();
	getchar();
	return 0;
}