
/*
	�֐��ƌ^
	������2��ƕ��������_���̂Q��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int�^������2��l�����߂� */
int sqr_int(int x)
{
	return x * x;
}

/* double�^���������_����2��l�����߂� */
double sqr_double(double x)
{
	return x * x;
}

int main()
{
	int n;
	double x;

	printf("��������͂��Ă��������F");
	scanf("%d", &n);
	printf("���̐���2���%d�ł��B\n", sqr_int(n));

	printf("��������͂��Ă��������F");
	scanf("%lf", &x);
	printf("���̐���2���%f�ł��B\n", sqr_double(x));

	getchar();
	return 0;
}