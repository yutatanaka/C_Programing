
/*
	���K4-2

	�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�������ق��̐��ȏ��
	�傫���ق��̐��ȉ��̑S�������������l��\������v���O�������쐬����B

	���o�͌��ʁ�

	��̐�������͂��Ă��������B
	����a:37
	����b:28
	28�ȏ�37�ȉ��̑S�����̘a��325�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, min, max;
	int sum = 0;

	puts("��̐�������͂��Ă��������B");
	printf("����a�F");   scanf("%d", &a);
	printf("����b�F");   scanf("%d", &b);

	if (a > b)
	{
		max = a;
		min = b;
	}
	else if (b > a)
	{
		max = b;
		min = a;
	}

	printf("%d�ȏ�%d�ȉ��̑S�����̘a��", min, max);

	do{
		sum = sum + min;
		min = min + 1;
	} while (min < max + 1);

	printf("%d�ł��B", sum);

	getchar();
	return 0;
}