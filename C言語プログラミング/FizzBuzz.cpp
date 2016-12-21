
/*
	1から順番に数を表示する
	その数が3で割り切れるなら"Fizz"、5で割り切れるなら"Buzz"、両方で割り切れるなら"FizzBuzz"と表示する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int n;				/* 入力用変数 */
	
	printf("何回ループ：");	scanf("%d", &n);
	
	/* n回ループ */
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
				printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
	
		else
		{
			printf("%d\n", i);
		}
	}
	getchar();
	getchar();
	return 0;
}