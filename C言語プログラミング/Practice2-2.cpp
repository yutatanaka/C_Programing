
/*  
	�_������͂��A���v�A�ō��̓_���A�Œ�̓_����\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int tensu[10];		/* �_���z�� */
	int goukei = 0;		/* ���v */
	int max = 0;		/* �ō��_�� */
	int min = 999;		/* �Œ�_�� */
	int heikin = 0;		/* ���� */
	int i;

	printf("10��_������͂��Ă��������B\n");
	/* 10��_������͂��� */
	/* �ō����_�ƍŒᓾ�_���r�������ɓ��Ă͂܂�Α������ */
	for (i = 1; i < 11; i++)
	{
		printf("%d�ڂ̓_������͂����Ă��������F", i);
		scanf("%d", &tensu[i - 1]);
		goukei += tensu[i - 1];

		/* �ō��_����荂����Α�� */
		if (max < tensu[i - 1])
		{
			max = tensu[i - 1];
		}
		else if (min > tensu[i - 1])
		{
			min = tensu[i - 1];
		}
	}

	/* ���ς����߂� */
	heikin = goukei / 10;

	/* ���v�ƕ��ς�\������ */
	printf("���v��%d ���ρ�%d", goukei, heikin);

	/* �ō��_���ƍŒᕽ�ς�\������ */
	printf("�ō��_����%d�@�Œ�_����%d", max, min);

	getchar();
	getchar();
	return 0;
}