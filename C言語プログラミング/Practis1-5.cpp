
/*
	名前と点数を二人分入力し、点数が大きい方の名前を表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char namae1[10] = { NULL };
	char namae2[10] = { NULL };
	int tensu1 = 0, tensu2 = 0;

	printf("一人目の名前を入力してください：");	scanf("%s", namae1);
	printf("点数を入力してください：");			scanf("%d", &tensu1);
	printf("二人目の名前を入力してください：");	scanf("%s", namae2);
	printf("点数を入力してください：");			scanf("%d", &tensu2);

	if (tensu1 > tensu2)
	{
		printf("%sさんの方が大きい\n", namae1);
	}
	else
	{
		printf("%sさんの方が大きい\n", namae2);
	}

	getchar();
	getchar();
	return 0;
}