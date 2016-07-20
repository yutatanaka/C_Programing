
/*
	switch文とbreak文その２

	読み込んだ整数値を3で割った剰余を表示
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;
	
	printf("整数を入力してください：");
	scanf("%d", &no);

	switch (no % 3)
	{
	case 0: 
		puts("その数は3で割り切れます");
		break;
	case 1:
		puts("その数を3で割った剰余は1です。");
		break;
	case 2:
		puts("その数を3で割った剰余は2です。");
		break;
	}

	getchar();
	return 0;
}