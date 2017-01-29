
/*
	練習問題2.4の3.の答えをインクリメント演算子またはデクリメント演算子を使って書き直してください。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;

	do
	{
		printf("判定したい数を入力してください：");
		scanf("%d", &num);
	} while (num <= 1);
	
	for (i = 2; i <= num / 2; i++)
	{
		if ((num % i) == 0)
		{
			printf("%d\n", i);
		}
	}

	getchar();
	return 0;
}