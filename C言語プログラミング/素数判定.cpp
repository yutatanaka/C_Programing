
/*  
	・与えられた数が素数かどうか調べる
	・あるいは与えられた数までの素数を列挙する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, j, yakusuu;

	printf("素数を求めます。数字を入力してください：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		yakusuu = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0) yakusuu++;
		}
		if (yakusuu == 2) printf("%d ", i);
	}
	printf("\n");

	getchar();
	getchar();
	return 0;
}