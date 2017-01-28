
/*
	2つの整数を加算または減算するプログラムを作成してください。
	最初に演算の種類を選択させ、次に2つの整数を入力させて結果を表示するものとします。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, choice;

	printf("1：加算　2：減算\nどちらかを選択してください：");	
	scanf("%d", &choice);

	printf("1つ目の整数を入力してください：");	scanf("%d", &num1);
	printf("2つ目の整数を入力してください：");	scanf("%d", &num2);

	if (choice == 1)
	{
		printf("%d + %d = %d", num1, num2, num1 + num2);
	}
	else if (choice == 2)
	{
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}

	getchar();
	return 0;
}