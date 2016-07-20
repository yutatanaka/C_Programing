
/*
	switch文とbreak文

	読み込んだ整数値を３で割った剰余を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	if (no % 3 == 0)
	{
		puts("その数は3で割り切れます");
	}
	else if (no % 3 == 1)
	{
		puts("その数を3で割った剰余は1です。");
	}
	else
	{
		puts("その数を3で割った剰余は2です。");
	}

	getchar();
	return 0;
}