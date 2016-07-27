
/*
	演習6-15

	呼び出された回数を表示する関数put_countを作成せよ。
	(右に示すのは、関数put_countを3回呼び出した実行結果である。)
		void put_count() {    }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

void put_count()
{
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%d回目\n", i);
	}
}

int main()
{
	printf("呼び出す回数を入力してください：");
	scanf("%d", &n);

	put_count();
	
	getchar();
	getchar();
	return 0;
}