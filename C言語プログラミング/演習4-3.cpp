
/*
	���K4-3

	���̒l��ǂݍ��񂾂Ƃ��ɉ��s�������o�͂��Ȃ��悤�ɁAList4-5�̃v���O����������������B
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
		printf("%d ", no);
		no--;
	}

	if (no <= 0)
	{
		/* �������Ȃ� */
	}

	getchar();
	return 0;
}