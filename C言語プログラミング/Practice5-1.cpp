
/*  
	�}�`�̎��(�����`��1�A�����`��2�A�~��3)����͂���B
	�}�`�̎�ނ��Ƃɖʐς����߂�֐������s����B�ʐς̕\���̓��C���֐��ōs���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PAI 3.141592

/* �����`�̖ʐς����߂�֐� */
int Seihoukei()
{
	float hen = 0, result = 0;

	printf("�ӂ̒����F");	scanf("%f", &hen);

	/* �����`�̖ʐς��v�Z */
	result = hen * hen;

	/* ���ʂ�Ԃ� */
	return result;
}

/* �����`�̖ʐς����߂�֐� */
int Chouhoukei()
{
	float tate = 0, yoko = 0, result = 0;
	
	printf("�c�̒����F");	scanf("%f", &tate);
	printf("���̒����F");	scanf("%f", &yoko);

	/* �����`�̖ʐς��v�Z */
	result = tate * yoko;

	/* ���ʂ�Ԃ� */
	return result;
}

/* �~�̖ʐς����߂�֐� */
int En()
{
	float hankei = 0, result = 0; 

	printf("���a�̒����F");	scanf("%f", &hankei);

	/* �~�̖ʐς��v�Z */
	result = hankei * hankei * PAI;

	/* ���ʂ�Ԃ� */
	return result;
}


int main()
{
	int shurui;					/* ��� */
	float menseki;				/* �ʐ� */
	
	/* ���͏��� */
	while (1)
	{
		printf("�}�`�̎�ނ����(�����`��1�A�����`��2�A�~��3):");	scanf("%d", &shurui);

		switch (shurui)
		{
		case 1:
			/* 1����͂����琳���`�̖ʐς����߂�֐����Ăяo�� */
			menseki = Seihoukei();
			printf("�ʐς́@%.2f�ł�\n", menseki);
			break;
		case 2:
			/* 2����͂����璷���`�̖ʐς����߂�֐����Ăяo�� */
			menseki = Chouhoukei();
			printf("�ʐς́@%.2f�ł�\n", menseki);
			break;
		case 3:
			/* 3����͂�����~�̖ʐς����߂�֐����Ăяo�� */
			menseki = En();
			printf("�ʐς́@%.2f�ł�\n", menseki);
			break;
		default:
			break;
		}
	}
	getchar();
	getchar();
	return 0;
}