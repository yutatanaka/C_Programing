
/*
	�_����999�𒴂���܂ŁA�_������͂��A���v�A���ρA�ō��_���A�Œ�_����\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int tensu = 0, kensu = 0, goukei = 0, heikin = 0;
	int max = 0, min = 0;

	printf("�_������͂��Ă��������B\n");
	printf("%d�l�ڂ̓_���F", ++kensu); scanf("%d", &tensu);
	max = tensu;
	min = tensu;

	/* ���v��999�𒴂���܂Ŏ��̏������J��Ԃ� */
	while(goukei <= 999)
	{
		printf("%d�l�ڂ̓_���F", ++kensu);	scanf("%d", &tensu);

		/* �_�������v�ɉ��Z���� */
		goukei += tensu;
		/* �_�����ō��_�����傫����Γ_�����ō��_���Ƃ���B*/
		if (tensu > max)
		{
			max = tensu;
		}
		/* �_�����Œ�_����菬������Γ_�����Œ�_���Ƃ���B*/
		if (tensu < min)
		{
			min = tensu;
		}
	}

	/* ���ς����߂� */
	heikin = goukei / kensu;

	/* ���v�A���ς�\������ */
	printf("���v��%d  ���ρ�%d\n", goukei, heikin);

	/* �ō����_�ƍŒᓾ�_��\������ */
	printf("�ō����_��%d  �Œᓾ�_��%d", max, min);

	getchar();
	getchar();
	return 0;
}