
/*
	�J�E���g�A�b�v

	�ǂݍ��񂾐��̐����l�܂ŃJ�E���g�A�b�v
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
	{
		printf("%d ", i++);			/* i�̒l��\��������ɃC���N�������g */
	}
	printf("\n");					/* ���s */

	getchar();
	return 0;
}