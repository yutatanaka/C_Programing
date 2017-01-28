
/*
	2つの整数を入力させ、和または積を表示するプログラムを作成してください。
	和と積のどちらを表示するかはユーザーが選択するものとします。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, choice;

	printf("1つ目の整数を入力してください：");	scanf("%d", &a);
	printf("2つ目の整数を入力してください：");	scanf("%d", &b);
	while (1)
	{
		printf("和と積どちらを表示させますか？(和：1　積：2)：");	scanf("%d", &choice);
		if (choice == 1)
		{
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		}
		else if (choice == 2)
		{
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		}
		else
		{
			printf("入力された数値が間違っています。\n");
			continue;
		}
	}

	getchar();
	return 0;
}