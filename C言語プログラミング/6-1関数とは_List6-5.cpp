
/*
	�l�n��

	�ׂ�������߂�
	<�o�͌���>
	a��b������߂܂��B
	����a�F4.6
	����b�F3
	4.60��3���97.34�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---x��n���Ԃ�--- */
double power(double x, int n)
{
	int i;
	double tmp = 1.0;

	for (i = 1; i <= n; i++)
	{
		tmp *= x;		/* tmp��x���|���� */
	}
	return tmp;
}

int main()
{
	double a;
	int b;

	printf("a��b������߂܂��B\n");
	printf("����a�F");   scanf("%lf", &a);
	printf("����b�F");   scanf("%d",  &b);

	printf("%.2f��%d���%.2f�ł��B\n", a, b, power(a, b));

	getchar();
	getchar();
	return 0;
}