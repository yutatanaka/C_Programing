
/*  
	�����̂Q����v�Z����֐����쐬���Ȃ����B1��int�^���������A
	���ʂ�߂�l�Ƃ��ĕԂ����ƁB
	�܂��A�֐��̓�������؂ł���悤�Ƀv���O�������쐬���Ȃ����B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiplication(int a)
{
	int value;
	value = a * a;
	return value;
}

int main()
{
	int a, value;

	printf("���l�F");	scanf("%d", &a);

	value = Multiplication(a);

	printf("%d", value);

	getchar();
	return 0;
}