
/*

	次のプログラムを別関数にしてプログラムを作成
	putchar(n);

*/
#include <stdio.h>

void PutChar(char num)
{
	putchar(num);
}

int main()
{
	char n;
	n = '*';
	PutChar(n);

	getchar();
	return 0;
}