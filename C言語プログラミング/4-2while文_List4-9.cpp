
/*
	�O�u�������Z�q�ƑO�u�������Z�q

	�w�����ꂽ������������ǂݍ���ō��v�l�ƕ��ϒl��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;				/* ���v�l */
	int num, tmp;

	printf("�����͉��ł����F");
	scanf("%d", &num);

	while (i < num)
	{
		printf("No.%d:", ++i);	/* i�̒l���C���N�������g������ɕ\�� */
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("���v�l�F%d\n", sum);
	printf("���ϒl�F%.2f\n", (double)sum / num);

	getchar();
	return 0;
}