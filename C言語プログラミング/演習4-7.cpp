
/*
	���K4-7

	�E�Ɏ����悤�ɁA�ǂݍ��܂ꂽ�����ȉ��ł��鐳�̂Q�ׂ̂���̐������ɕ\������v���O�������쐬����B

	���o�͌��ʁ�

	���̐�������͂��Ă��������F19
	2 4 8 16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	i = 2;

	while (i <= no)
	{
		printf("%d", i);
		i *= 2;
	}

	getchar();
	return 0;
}