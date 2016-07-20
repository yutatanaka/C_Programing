
/*
	＜do文＞
	整数値を読み込み、その値が奇数であるか偶数であるかを判定表示をする。
	その後、再び行うかどうかを確認して、要望があれば処理を繰り返す
	
	読み込んだ整数値は奇数であるか偶数であるか(好きなだけ繰り返せる)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int retry;		/* 処理を続けるか */

	do
	{
		int no;

		printf("整数を入力してください：");
		scanf("%d", &no);

		if (no % 2)
		{
			puts("その数は奇数です。");
		}
		else
		{
			puts("その数は偶数です。");
		}

		printf("もう一度？【Yes･･･0 / No…9】　:");
		scanf("%d", &retry);
	} while (retry == 0);

	getchar();
	return 0;
}