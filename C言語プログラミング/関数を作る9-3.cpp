
/*
	�Q�̐����̑傫������I�Ԋ֐����쐬���Ȃ����B
	�Q��int�^���������A�傫�����̐��l��߂�l�Ƃ��ĕԂ����ƁB
	�܂��Aint�^�̕ϐ�x,y,z�ɂ��ꂼ�ꐔ�l����͂��A
	�쐬�����֐����g�p���čł��傫�����l��\������v���O�������쐬���Ȃ����B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Big(int a, int b)
{
	int tmp;
	if (a > b)
	{
		tmp = a;
	}
	else if (a < b)
	{
		tmp = b;
	}
	return tmp;
}

int main()
{
	int x, y, z;
	int max;

	printf("���l�P�F");	scanf("%d", &x);
	printf("���l�Q�F");	scanf("%d", &y);
	printf("���l�R�F");	scanf("%d", &z);

	max = Big(x, Big(y, z));

	printf("%d", max);

	getchar();
	return 0;
}