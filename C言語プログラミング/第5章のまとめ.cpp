
/*
	��5�͂̂܂Ƃ�

	<�o�͌���>
	a[0] = 1
	a[1] = 2
	a[2] = 3
	a[3] = 0
	a[4] = 0
	b[0] = 1
	b[1] = 2
	b[2] = 3
	b[3] = 0
	b[4] = 0
	�z��a�̑S�v�f�̍��v=6
	c[0][0] = 11
	c[0][1] = 22
	c[0][2] = 33
	c[1][0] = 44
	c[1][1] = 55
	c[1][2] = 66
*/

#include <stdio.h>

#define SIZE 5			/* �z��a��b�̗v�f�� */

int main()
{
	int i, j;
	int sum;

	/* �z��a��b��int[5]�^��1�����z��(�v�f�^��int�ŗv�f����5) */
	int a[SIZE];		/* �S�v�f��s��l�ŏ����� */
	int b[SIZE] = {1, 2, 3};		/* {1, 2, 3, 0, 0}�ŏ����� */

	/* �z��c��int[2][3]�^��2�����z��(�v�f�^��int[3]�ŗv�f����2) */
	int c[2][3] = 
	{
		{11, 22, 33},
		{44, 55, 66}
	};

	/* �z��b�̑S�v�f��a�ɃR�s�[ */
	for (i = 0; i < SIZE; i++)
		a[i] = b[i];

	/* �z��a�̑S�v�f�̒l��\�� */
	for (i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

	/* �z��b�̑S�v�f�̒l��\�� */
	for (i = 0; i < SIZE; i++)
		printf("b[%d] = %d\n", i, b[i]);

	/* �z��a�̑S�v�f�̍��v��sum�ɋ��߂ĕ\�� */
	sum = 0;
	for (i = 0; i < SIZE; i++)
		sum += a[i];
	printf("�z��a�̑S�v�f�̍��v��%d\n", sum);

	/* �z��c�̑S�\���v�f�̒l��\�� */
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}

	getchar();
	getchar();
	return 0;
}