
/*
	�L������Ԃ��̂Q

	�ÓI�L������Ԃ����I�u�W�F�N�g�̈Öق̏��������m�F
	���o�͌��ʁ�
	fx = 0
	si = 0
	sd = 0
	sa[0] = 0
	sa[1] = 0
	sa[2] = 0
	sa[3] = 0
	sa[4] = 0
*/

#include <stdio.h>

int fx;					/* 0�ŏ���������� */

int main()
{
	int i;
	static int si;		/* 0�ŏ���������� */
	static double sd;	/* 0.0�ŏ���������� */
	static int sa[5];	/* �S�v�f��0�ŏ���������� */

	printf("fx = %d\n", fx);
	printf("si = %d\n", si);
	printf("sd = %d\n", sd);

	for (i = 0; i < 5; i++)
	{
		printf("sa[%d] = %d\n", i, sa[i]);
	}

	getchar();
	getchar();
	return 0;
}