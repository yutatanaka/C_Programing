
/*
	練習問題2.1の2.のプログラムを、else文を使うように書き直してください。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num;
	int choice;

	printf("数値を入力してください：");	scanf("%f", &num);

	printf("1: フィートからメートルへ、2: メートルからフィートへ\n");
	printf("選択してください：");	scanf("%d", &choice);

	if (choice == 1)
	{
		printf("%f", num / 3.28);
	}
	else
	{
		printf("%f", num * 3.28);
	}

	getchar();
	return 0;
}