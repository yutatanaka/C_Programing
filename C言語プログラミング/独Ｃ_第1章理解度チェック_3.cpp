
/*
	�č��̗����v�ʗp�J�b�v1�t��8�I���X(��237cc)�ɑ������܂��B
	�I���X���J�b�v�ɕϊ�����v���O�������쐬���Ă��������B
	�ϊ��ɂ�o_to_c()�Ƃ����֐����g���܂��B
	���̊֐��̓I���X�����󂯎��J�b�v����Ԃ����̂Ƃ��܂��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int o_to_c(int);

int main()
{
	int ons;		/* �I���X */
	int cup;		/* �J�b�v */
	printf("�I���X������͂��Ă��������F");
	scanf("%d", &ons);

	cup = o_to_c(ons);

	printf("%d�J�b�v�ł��B\n", cup);

	getchar();
	return 0;
}

int o_to_c(int num)
{
	int cup;
	cup = num / 8;

	return cup;
}