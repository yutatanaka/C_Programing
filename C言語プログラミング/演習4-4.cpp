
/*
	���K4-4

	List4-6�̃v���O�������ȉ��̂悤�ɏ����������v���O�������쐬����B
	�E0�ł͂Ȃ�1�܂ŃJ�E���g�_�E������
	�E���͂��ꂽ�l��0�ȉ��ł���Ƃ��́A���s���s��Ȃ��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	while (no >= 1)
	{
		printf("%d", no--);
	}

	getchar();
	return 0;
}