
/*
	演習4-1

	読み込んだ整数値の符号を判定するList3-9を、
	入力・表示を好きなだけ繰り返せるように変更したプログラムを作成せよ。
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no, retry;


	do {
		printf("整数を入力してください：");
		scanf("%d", &no);

		if (no == 0)
		{
			puts("その数は0です。");
		}
		else if (no > 0)
		{
			printf("その数は正です。\n");
		}
		else if (no < 0)
		{
			printf("その数は負です。\n");
		}

		printf("続けますか？【Yes…0 / No…9】:");
		scanf("%d", &retry);

	} while (retry == 0);

	getchar();
	return 0;
}