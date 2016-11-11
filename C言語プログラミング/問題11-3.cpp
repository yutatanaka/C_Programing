
/*
	次のプログラムを別関数にしてプログラムを作成 
	c = a * b;
*/

#include <stdio.h>

// 掛け算をする関数
int Multiply(int a, int b)
{
	int total;

	total = a * b;

	return total;
}

int main()
{
	int a, b, c;
	
	a = 20;
	b = 10;

	c = Multiply(a, b);
	printf("c = %d\n", c);

	getchar();
	return 0;
}