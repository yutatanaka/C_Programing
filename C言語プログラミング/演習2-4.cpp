
/*
	���K2-4

	�����萔�A���������_�萔�Aint�^�̕ϐ��Adouble�^�̕ϐ������A�|�����芄�����肷��Ȃ�
	���낢��ȉ��Z���s���v���O�������쐬���A�{���Ɏ������K�����m�F����B
*/

#include <stdio.h>

int main()
{
	int n1, n2;
	double d1, d2;

	n1 = 10;
	n2 = 2;

	d1 = 10.0;
	d2 = 2.0;

	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
	printf("%f * %f = %f\n", d1, d2, d1 * d2);
	printf("%f / %f = %f\n", d1, d2, d1 / d2);

	getchar();
	return 0;
}