
/*
	演習6-6

	警報をn回連続して発する関数を作成せよ。
		void alert(int n) {    }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void alert(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		putchar('\a');
	}
}

int main()
{
	int num;
	printf("何回警報を鳴らしますか？:");
	scanf("%d", &num);

	alert(num);

	getchar();
	getchar();
	return 0;
}