
/*
	���K���2.1��2.�̃v���O�������Aelse�����g���悤�ɏ��������Ă��������B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num;
	int choice;

	printf("���l����͂��Ă��������F");	scanf("%f", &num);

	printf("1: �t�B�[�g���烁�[�g���ցA2: ���[�g������t�B�[�g��\n");
	printf("�I�����Ă��������F");	scanf("%d", &choice);

	if (choice == 1)
	{
		printf("%f", num / 3.28);
	}
	else
	{
		printf("%f", num * 3.28);
	}

	getchar();
	return 0;
}