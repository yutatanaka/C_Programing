
/*
���K4-10

�ǂݍ��񂾐����l�̌�����*���c�ɘA�����ĕ\������v���O�������쐬����B
�Ȃ��A0�ȉ��̐��������͂��ꂽ�ꍇ�́A�����\�����Ȃ����ƁB

<�o�͌���>

���̐����F3
*
*
*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;

	printf("���̐����F");
	scanf("%d", &num);

	i = 0;

	if (num > 0)
	{
		while (i < num)
		{
			printf("*\n");
			i++;
		}
	}

	getchar();
	return 0;
}