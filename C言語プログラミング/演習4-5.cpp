
/*
	���K4-5

	List4-7�̃v���O�������ȉ��̂悤�ɏ����������v���O�������쐬����B
	�E0����ł͂Ȃ�1����̃J�E���g�A�b�v���s���B
	�E���͂��ꂽ�l��0�ȉ��ł���Ƃ��́A���s���s��Ȃ��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	i = 1;
	while (i <= no)
	{
		printf("%d ", i++);					/* i�̒l��\��������ɃC���N�������g */

		if (i <= 0)
			printf("\n");						/* ���s */
	}

	getchar();
	return 0;
}