
/*
	バケットソート
*/

#include <stdio.h>

int main()
{
	int a[5] = { 0, 2, 5, 81, 3 };
	int b[82] = { -1 };
	// b配列の要素を全部-1で初期化する
	for (int n = 0; n < 82; ++n)
	{
		b[n] = -1;
	}

	// b配列にa配列の要素を入れる
	for (int i = 0; i < 5; ++i)
	{
		b[a[i]] = a[i];
	}

	for (int k = 0; k < 82; ++k)
	{
		if (b[k] != -1)
		{
			printf("%d\n", b[k]);

		}
	}
	

	getchar();
	return 0;
}