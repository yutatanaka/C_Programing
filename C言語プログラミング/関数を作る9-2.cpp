
/*
	2�̐����̕��ς��v�Z����֐����쐬���Ȃ����B
	2��int�^���������A���ʂ�߂�l�Ƃ��ĕԂ����ƁB
	�܂��A�֐��̓�������؂ł���悤�Ƀv���O�������쐬���Ȃ����B
	���v�Z�͐����ōs���A�����_�ȉ��͐؂�̂ĂĂ悢�B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Heikin(int a, int b)
{
	int heikin;
	heikin = a + b / 2;
	return heikin;
}

int main()
{
	int a, b, heikin;

	printf("���l�P�F");	scanf("%d", &a);
	printf("���l�Q�F");	scanf("%d", &b);

	heikin = Heikin(a, b);

	printf("%d", heikin);

	getchar();
	return 0;
}