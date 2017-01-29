
/*
	例2.4の2.の素数テスタを参考にして、1とその数自身を除くすべての約数を表示する
	プログラムを作成してください。たとえば、8が入力されたら2と4を表示するようにします。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0, i;

	for (; num <= 1;)
	{
		printf("判定したい数を入力してください：");
		scanf("%d", &num);
	}

	/* 約数があるかどうかを調べる */
	for (i = 2; i <= num / 2; i = i + 1)
	{
		
		if ((num % i) == 0)
		{
			printf("%d\n", i);
		}
	}

	getchar();
	return 0;
}