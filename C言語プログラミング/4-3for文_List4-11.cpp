
/*
	for��

	�ǂݍ��񂾐��̐����l�܂ŃJ�E���g�A�b�v(for��)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &no);

	for (i = 0; i <= no; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');

	getchar();
	getchar();
	return 0;
}