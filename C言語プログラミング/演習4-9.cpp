
/*
	���K4-9

	�ǂݍ��񂾒l�̌�����+��-�����݂ɕ\������v���O������\������B
	�Ȃ��A0�ȉ��̐��������͂��ꂽ�ꍇ�́A�����\�����Ȃ����ƁB

	<�o�͌���>

	���̐����F13
	+-+-+-+-+-+-+
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
			if (i % 2 == 0)
			{
				printf("+");
				++i;
			}
			else
			{
				printf("-");
				++i;
			}
		}
	}
	getchar();
	return 0;
}