
/*
	<�z��v�f�̍ő�l�ƍŏ��l>

	�w���̓_����ǂݍ���ōō��_�ƍŒ�_��\��
	<�o�͌���>
	5�l�̓_������͂��Ă��������B
	1�ԁF83
	2�ԁF95
	3�ԁF85
	4�ԁF63
	5�ԁF89
	�ō��_�F95
	�Œ�_�F63
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5		/* �w���̐l�� */

int main()
{
	int i;
	int tensu[NUMBER];		/* NUMBER�l�̊w���̓_�� */
	int min, max;			/* �ō��_�E�Œ�_ */

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; ++i)
	{
		printf("%2d�ԁF", i + 1);
		scanf("%d", &tensu[i]);
	}

	min = max = tensu[0];
	for (i = 0; i < NUMBER; ++i)
	{
		if (tensu[i] > max) max = tensu[i];
		if (tensu[i] < min) min = tensu[i];
	}

	printf("�ō��_�F%d\n", max);
	printf("�Œ�_�F%d\n", min);

	getchar();
	getchar();
	return 0;
}