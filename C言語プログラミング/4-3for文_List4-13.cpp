
/*
	for���ɂ����񐔂̌J�Ԃ����̂Q

	�w�����ꂽ������������ǂݍ���ō��v�l�ƕ��ϒl��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;			/* ���v�l */
	int num, tmp;

	printf("�����͉��ł����F");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("No.%d :", i + 1);
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("���v�l�F%d\n", sum);
	printf("���ϒl�F%.2f\n", (double)sum / num);

	getchar();
	return 0;
}