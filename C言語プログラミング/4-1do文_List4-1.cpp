
/*
	��do����
	�����l��ǂݍ��݁A���̒l����ł��邩�����ł��邩�𔻒�\��������B
	���̌�A�Ăэs�����ǂ������m�F���āA�v�]������Ώ������J��Ԃ�
	
	�ǂݍ��񂾐����l�͊�ł��邩�����ł��邩(�D���Ȃ����J��Ԃ���)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int retry;		/* �����𑱂��邩 */

	do
	{
		int no;

		printf("��������͂��Ă��������F");
		scanf("%d", &no);

		if (no % 2)
		{
			puts("���̐��͊�ł��B");
		}
		else
		{
			puts("���̐��͋����ł��B");
		}

		printf("������x�H�yYes���0 / No�c9�z�@:");
		scanf("%d", &retry);
	} while (retry == 0);

	getchar();
	return 0;
}