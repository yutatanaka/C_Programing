
/*
	���K2-1

	�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�O�҂̒l����҂̉����ł��邩��\������v���O�������쐬����B

	���o�͌��ʁ�

	��̐�������͂��Ă��������B
	����x�F54
	����y�F84
	x�̒l��y��64%�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	puts("��̐�������͂��Ă��������B");
	printf("����x�F");	scanf("%d", &x);
	printf("����y�F");	scanf("%d", &y);

	printf("x�̒l��y��%d%%�ł��B", x % y);

	getchar();
	return 0;
}