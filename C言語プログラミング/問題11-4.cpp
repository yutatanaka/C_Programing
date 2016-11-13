
/*
	次のプログラムを別関数にしてプログラムを作成
	if(a <= b){
		c = a;
	}
	else{
		c = b;
	}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Min(int a, int b)
{
	int c;
	
	if (a <= b)
	{
		c = a;
		return c;
	}
	else
	{
		c = b;
		return c;
	}
}

int main()
{
	int a, b, c;

	puts("二つの整数値を入力");
	scanf("%d %d", &a, &b);

	printf("小さい方 = %d\n", Min(a, b));

	getchar();
	return 0;
}