
/*
	���K6-5
	1����n�܂ł̑S�����̘a�����߂ĕԋp����֐����쐬����B
		int sumup(int n) {     }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumup(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int num;

	puts("��������͂��Ă��������B");
	printf("�����F");   scanf("%d", &num);

	printf("1����%d�܂ł̑S�����̘a��%d�ł��B\n", num, sumup(num));

	getchar();
	getchar();
	return 0;
}