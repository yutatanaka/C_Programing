
/*
	���K1-6

	�E�Ɏ����悤�ɁA�ǂݍ��񂾐����l����6���������l��\������v���O�������쐬����B

	���o�͌��ʁ�
	��������͂��Ă��������F57
	57����6���������51�ł��B

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	printf("%d����%d���������%d�ł��B\n", no, 6, no - 6);

	getchar();
	return 0;
}