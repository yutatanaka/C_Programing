
/*
	�S���҂�"end"�ɂȂ�܂ŁA�S���Җ��Ɣ������͂���B
	���㍇�v�A���ρA�ł�����グ�������S���Җ��Ƃ��̔����\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 0, goukei = 0, heikin = 0;					/* �����A���v�A���� */
	int uriage = 0, max_uriage = 0, min_uriage = 0;	/* ����A�ō�����A�Œᔄ�� */
	char tanto[10], max_tanto[10], min_tanto[10];			/* �S���A�ō�����S���A�Œᔄ��S�� */
	int i = 0;

	/* �O���� */
	printf("�S���Җ���end�ŏI��\n");
	printf("%d�l�ڂ̒S���Җ���",++i);	scanf("%s", tanto);
	printf("%s�̔��ぁ", tanto);	scanf("%d", &uriage);

	strcpy(max_tanto, tanto);
	strcpy(min_tanto, tanto);
	max_uriage = uriage;
	min_uriage = uriage;

	/* �S���҂�"end"�ɂȂ�܂Ŏ��̏������J��Ԃ� */
	while (strcmp(tanto, "end") != 0)
	{
		/* ��������v�ɉ��Z���� */
		goukei += uriage;
		/* �����ɂP�����Z���� */
		++kensu;
		/* ���オ�ō�������傫����Δ�����ō�����Ƃ��A�S�����ō�����S���Ƃ���B */	
		if (uriage > max_uriage)
		{
			max_uriage = uriage;
			strcpy(max_tanto, tanto);
		}
		/* ���オ�Œᔄ���菬������Δ�����Œᔄ��Ƃ��A�S�����Œᔄ��S���Ƃ���B */
		else if (uriage < min_uriage)
		{
			min_uriage = uriage;
			strcpy(min_tanto, tanto);
		}
		/* ��l�ڈȍ~�̒S���Җ�����͂��� */
		printf("%d�l�ڂ̒S���Җ���", ++i);	scanf("%s", tanto);
		/* �S���Җ���"end"�łȂ���� */
		if (strcmp(tanto, "end") != 0)
		{
			printf("%s�̔��ぁ", tanto);	scanf("%d", &uriage);
		}
	}

	/* ���ς����߂� */
	heikin = goukei / kensu;
	/* ���v�A���ς�\������ */
	printf("���v��%d  ���ρ�%d\n", goukei, heikin);
	/* ����ō��S���Җ��ƍō������\������ */
	printf("����ō��S���҂�%s�ŋ��z��%d\n", max_tanto, max_uriage);
	/* ����Œ�S���Җ��ƍŒᔄ���\������ */
	printf("����Œ�S���҂�%s�ŋ��z��%d\n", min_tanto, min_uriage);

	getchar();
	getchar();
	return 0;
}