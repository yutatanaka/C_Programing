
/*
	練習問題2.4の2.の答えをインクリメント演算子またはデクリメント演算子を使って書き直してください。
*/

#include <stdio.h>

int main()
{
	int i;

	for (i = 100; i >= 17;)
	{
		if ((i % 17) == 0)
		{
			printf("%d\n", i);
		}
		i--;
	}

	getchar();
	return 0;
}