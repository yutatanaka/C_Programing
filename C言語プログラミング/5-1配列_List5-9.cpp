
/*
	�z��ɂ�鐬�я���

	5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int tensu[5];		/* 5�l�̊w���̓_�� */
	int sum = 0;		/* ���v�_ */

	printf("%d�l�̓_������͂��Ă��������B\n");
	for (i = 0; i < 5; ++i)
	{
		printf("%2d�ԁF", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("���v�_�F%5d\n", sum);
	printf("���ϓ_�F%5.1f\n", (double)sum / 5);

	getchar();
	getchar();
	return 0;
}