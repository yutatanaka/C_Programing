
/*
	���̃v���O������ʊ֐��ɂ��ăv���O�������쐬 
	c = a * b;
*/

#include <stdio.h>

// �|���Z������֐�
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