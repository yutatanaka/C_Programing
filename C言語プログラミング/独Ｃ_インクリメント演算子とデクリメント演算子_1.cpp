
/*
	練習問題2.4の1.の答えをインクリメント演算子またはデクリメント演算子を使って書き直してください。
*/

#include <stdio.h>

int main()
{
	int i;

	for (i = 1; i <= 100;)
	{
		printf("%d\n", i);
		i++;
	}

	getchar();
	return 0;
}