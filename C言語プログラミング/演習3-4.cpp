
/*
	���K3-4

	�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�����̒l����������΁uA��B�͓������ł��B�v��
	A�̕����傫����΁uA��B���傫���ł��B�v��
	B�̕����傫����΁uA��B��菬�����ł��B�v�ƕ\������v���O�������쐬����B

	���o�͌��ʁ�

	��̐�������͂��Ă��������B
	����A�F54
	����B�F12
	A��B���傫���ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����A�F");   scanf("%d", &a);
	printf("����B�F");   scanf("%d", &b);

	if (a == b)
	{
		puts("A��B�͓������ł��B");
	}
	else if (a > b)
	{
		puts("A��B���傫���ł��B");
	}
	else if (a < b)
	{
		puts("A��B��菬�����ł��B");
	}

	getchar();
	return 0;
}