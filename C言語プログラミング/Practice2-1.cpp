
/*
	�_����10�����͂��A���̍��v��\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int tensu[10] = {0};
	int goukei = 0;
	int heikin = 0;
	int i;
	
	printf("�_����10����͂��Ă��������B\n");

	/* �_������͂�������10��J��Ԃ� */
	for (i = 1; i < 11; i++)
	{
		printf("%d�ڂ̓_������͂��Ă��������F", i);	scanf("%d", &tensu[i - 1]);
		goukei += tensu[i - 1];
	}

	/* ���ς����߂� */
	heikin = goukei / 10;

	/* ���v�ƕ��ς�\�� */
	printf("���v��%d  ���ρ�%d\n", goukei, heikin);

	getchar();
	getchar();
	return 0;
}