
/*
	�ŉ��ʌ��̒l�����߂�

	�ǂݍ��񂾐����l�̍ł����̌��̐�����\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	printf("�ł����̌���%d�ł��B\n", no % 10);

	getchar();
	return 0;
}