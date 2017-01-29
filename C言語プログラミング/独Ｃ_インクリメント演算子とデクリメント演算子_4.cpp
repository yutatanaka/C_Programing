
/*  
	次のプログラムの代入文をインクリメント演算子かデクリメント演算子を使って書き直してください。
*/

#include <stdio.h>

int main()
{
	int a, b;

	a = 1;
	a++;
	b = a;
	b--;
	printf("%d %d", a, b);

	getchar();
	return 0;
}