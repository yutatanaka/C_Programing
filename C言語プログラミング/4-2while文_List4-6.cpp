
/*
	�������Z�q��p������Z�ȕ\��

	�ǂݍ��񂾐����l��0�܂ŃJ�E���g�_�E��(���̂Q)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d", no--);					/* no�̒l��\��������Ƀf�N�������g */
	printf("\n");							/* ���s */

	getchar();
	return 0;
}