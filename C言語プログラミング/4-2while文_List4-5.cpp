
/*
	while��

	�ǂݍ��񂾐����l��0�܂ŃJ�E���g�_�E��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	while (no >= 0)
	{
		printf("%d\n", no);
		no--;				/* no�̒l���f�N�������g */
	}

	printf("\n");			/* ���s */

	getchar();
	return 0;
}