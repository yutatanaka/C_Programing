
/*
	char�^�̕ϐ�a�ɕ���'A'�������A
	���̕ϐ��ɉ��Z���{���A������'a'�ɂ��ĕ\������v���O�������쐬���Ȃ����B
*/

#include <stdio.h>

int main()
{
	char a = 'A';

	a = a + 0x20;
	
	printf("%c", a);

	getchar();
	return 0;
}