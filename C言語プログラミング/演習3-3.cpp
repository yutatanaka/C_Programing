
/*
	���K3-3

	�E�Ɏ����悤�ɁA�����l��ǂݍ���ŁA���̐�Βl��\������v���O�������쐬����B

	<�o�͌���>

	��������͂��Ă��������F-8
	��Βl��8�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("��������͂��Ă��������F");
	scanf("%d", &num);

	if (num < 0)
	{
		num = -num;
		printf("��Βl��%d�ł��B", num);
	}
	else if (num >= 0)
	{
		num = num;
		printf("��Βl��%d�ł��B", num);
	}

	getchar();
	return 0;
}