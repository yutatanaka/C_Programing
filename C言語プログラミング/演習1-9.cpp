
/*
	���K1-9

	�E�Ɏ����悤�ɁA�ǂݍ��񂾎O�̐����l�̘a��\������v���O�������쐬����B

	���o�͌��ʁ�

	�O�̐�������͂��Ă��������B
	����1�F7
	����2�F15
	����3�F23
	�����̘a��45�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3;
	int wa;
	
	puts("�O�̐�������͂��Ă��������B");
	
	printf("����1�F");	scanf("%d", &n1);
	printf("����2�F");	scanf("%d", &n2);
	printf("����3�F");	scanf("%d", &n3);

	wa = n1 + n2 + n3;

	printf("�����̘a��%d�ł��B", wa);

	getchar();
	return 0;
}