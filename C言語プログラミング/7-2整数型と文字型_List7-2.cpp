
/*
	�����^

	�P�Ȃ�char�^�������t���^�����������^���𔻒�
*/

#include <stdio.h>
#include <limits.h>

int main()
{
	printf("���̏����n��char�^��");

	if (CHAR_MIN)
		puts("�����t���̌^�ł��B");
	else
		puts("���������̌^�ł��B"); 

	getchar();
	return 0;
}