
/*
	�z��̑������̂R

	�z��̑S�v�f��0.0�������ĕ\��
*/

#include <stdio.h>

int main()
{
	int i;
	double x[7];			/* double[7]�^�̔z�� */

	for (i = 0; i < 7; i++)	/* �v�f�ɒl���� */
	{
		x[i] = 0.0;
	}
	for (i = 0; i < 7; i++) /* �v�f�̒l��\�� */
	{
		printf("x[%d] = %.1f\n", i, x[i]);
	}

	getchar();
	return 0;
}