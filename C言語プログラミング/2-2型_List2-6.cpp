
/*
	�^

	�����ƕ��������_��
*/

#include <stdio.h>

int main()
{
	int n;		/* ���� */
	double x;	/* ���������_�� */

	n = 9.99;
	x = 9.99;

	printf("int   �^�ϐ� n�̒l�F%d\n", n);			/* 9 */
	printf("             n / 2�F%d\n", n / 2);		/* 9 / 2 */

	printf("double�^�ϐ� x�̒l  �F%f\n", x);			/* 9.99 */
	printf("             x / 2.0�F%f\n", x / 2.0);	/* 9.99 / 2.0 */

	getchar();
	return 0;
}