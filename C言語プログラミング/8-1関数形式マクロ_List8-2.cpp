
/*
	�֐��`���}�N��
	������2��ƕ��������_��2��(�֐��`���}�N��)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define sqr(x) ((x) * (x))		// x��2��l�����߂�֐��`���}�N��

int main()
{
	int n;
	double x;

	printf("��������͂��Ă��������F");
	scanf("%d", &n);
	printf("���̐���2���%d�ł��B\n", sqr(n));

	printf("��������͂��Ă��������F");
	scanf("%lf", &x);
	printf("���̐���2���%f�ł��B\n", sqr(x));

	getchar();
	getchar();
	return 0;
}