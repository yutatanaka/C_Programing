
/*
	�z��̏�����

	�z��̊e�v�f��擪���珇��1,2,3,4,5�ŏ��������ĕ\��

	<�o�͌���>

	v[0] = 1
	v[1] = 2
	v[2] = 3
	v[3] = 4
	v[4] = 5
*/

#include <stdio.h>

int main()
{
	int i;
	int v[5] = { 1, 2, 3, 4, 5 };		/* ������ */

	for (i = 0; i < 5; i++)				/* �v�f�̒l��\�� */
		printf("v[%d] = %d\n", i, v[i]);

	getchar();
	return 0;
}