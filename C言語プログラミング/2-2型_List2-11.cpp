
/*
	�ϊ��w��

	�O�̐����l��ǂݍ���ō��v�l�ƕ��ϒl��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int sum;		/* ���v�l */
	double ave;		/* ���ϒl */

	puts("�O�̐�������͂��Ă��������B");
	printf("����a�F");   scanf("%d", &a);
	printf("����b�F");   scanf("%d", &b);
	printf("����c�F");   scanf("%d", &c);

	sum = a + b + c;
	ave = (double)sum / 3;   /* �L���X�g */

	printf("�����̍��v��%5d�ł��B\n", sum);		/* 99999�`���ŏo�� */
	printf("�����̕��ς�%5.1f�ł��B\n", ave);		/* 999.9�`���œ��� */

	getchar();
	return 0;
}