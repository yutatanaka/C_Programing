
/*
	���͂��ꂽ�č��h�����p���|���h�Ɋ��Z����convert()�Ƃ����֐����쐬���A
	���̊֐����g���Ċ��Z��̋��z��\������v���O�������쐬���Ă�������(�בփ��[�g�͂P�|���h���Q�h���Ɖ��肵�܂�)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �č��h�����p���|���h�Ɋ��Z����R���o�[�^�[ */
int Convert(int *dollar)
{
	int value;	
	value = *dollar * 0.5;
	return value;
}

int main()
{
	int dollar;
	int pound;
	
	printf("���h�������͂��Ă��������F");	scanf("%d", &dollar);
	pound = Convert(&dollar);
	printf("%d�|���h�ł��B\n", pound);

	getchar();
	getchar();
	return 0;
}