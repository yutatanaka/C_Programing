
/*
	����A�Љ�A���Ȃ�3�Ȗڂ̓_������͂��A3�Ȗڂ̍��v�ƕ��ς�\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SUBJECT 3					/* ���v�Ȗڐ� */

/* �ŏ��ɓ_������͂���ׂ̊֐� */
void Print(int &a, int &b, int &c)
{
	printf("����̓_����");	scanf("%d", &a);
	printf("�Љ�̓_����");	scanf("%d", &b);
	printf("���Ȃ̓_����");	scanf("%d", &c);
}

/* ���v�_�����߂�֐� */
int Sum(int &a, int &b, int &c, int &sum)
{
	sum += a;
	sum += b;
	sum += c;
	return sum;
}

/* ���ϓ_�����߂�֐� */
int Average(int &sum, int &avarage)
{
	avarage = sum / SUBJECT;

	return avarage;
}

int main()
{
	int kokugo = 0;					//	����
	int shakai = 0;					//�@�Љ�
	int rika = 0;					//�@����
	int goukei = 0, heikin = 0;		//�@���v�ƕ���
	
	Print(kokugo, shakai, rika);
	Sum(kokugo, shakai, rika, goukei);
	Average(goukei, heikin);
	printf("���v�_��%d ���ϓ_��%d",goukei, heikin);


	getchar();
	getchar();
	return 0;
}