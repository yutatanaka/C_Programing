
/*
	�I�u�W�F�N�g�`���}�N��

	�w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��(�l�����}�N���Œ�`)
	<�o�͌���>
	5�l�̓_������͂��Ă��������B
	1�ԁF83
	2�ԁF95
	3�ԁF85
	4�ԁF63
	5�ԁF89
	���v�_�F415
	���ϓ_�F83.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5			/* �w���̐l�� */

int main()
{
	int i;
	int tensu[7];			/* NUMBER�l�̊w���̓_�� */
	int sum = 0;			/* ���v�_ */

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; ++i)
	{
		printf("%2d�ԁF", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("���v�_�F%5d\n", sum);
	printf("���ϓ_�F%5.1f\n", (double)sum / NUMBER);

	getchar();
	getchar();
	return 0;
}

