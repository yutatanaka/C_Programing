
/*
	���K3-1

	�E�Ɏ����悤�ɁA�Q�̐����l��ǂݍ���ŁA��҂��O�҂̖񐔂ł���΁uB��A�̖񐔂ł��B�v�ƕ\����
	�����łȂ���΁uB��A�̖񐔂ł͂���܂���B�v�ƕ\������v���O�������쐬����B

	���o�͌��ʁ�

	��̐�������͂��Ă��������B
	����A�F17
	����B�F5
	B��A�̖񐔂ł͂���܂���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����A�F");   scanf("%d", &a);
	printf("����B�F");   scanf("%d", &b);


	if (a % b)
	{
		printf("B��A�̖񐔂ł͂�܂���");
	}

	getchar();
	return 0;
}