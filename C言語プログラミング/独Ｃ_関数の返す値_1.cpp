
/*
	��1.8��1.�̃v���O��������͂��A�R���p�C�����Ď��s���Ă��������B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_sqr();			/* �v���g�^�C�v */

int main()
{
	int sqr;

	sqr = get_sqr();
	printf("2��l�F%d", sqr);

	getchar();
	return 0;
}

int get_sqr()
{
	int num;

	printf("���l����͂��Ă��������F");
	scanf("%d", &num);
	return num * num;		/* ���l��2�悷�� */
}