
/*
	���K3-10

	�E�Ɏ����悤�ɁA�O�̐����l��ǂݍ���ŁA
	�����̒l���S�ē�������΁u�O�̒l�͓������ł��B�v��
	�ǂꂩ��̒l����������΁u��̒l���������ł��B�v��
	�����łȂ���΁u�O�̒l�͈قȂ�܂��B�v��
	�\������v���O�������쐬����B

	���o�͌��ʁ�
	�O�̐�������͂��Ă��������B
	����A�F12
	����B�F35
	����C�F12
	��̒l���������ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;

	puts("�O�̐�������͂��Ă��������B");
	printf("����A�F");   scanf("%d", &a);
	printf("����B�F");   scanf("%d", &b);
	printf("����C�F");   scanf("%d", &c);

	if (a == b && b == c)
	{
		printf("�O�̒l�͓������ł��B");
	}
	else if (a == b || b == c || c == a)
	{
		printf("��̒l���������ł��B");
	}
	else
	{
		printf("�O�̒l�͈قȂ�܂��B");
	}


	getchar();
	return 0;
}