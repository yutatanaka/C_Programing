
/*
	���d���[�v

	�ǂݍ��񂾐����̌�����*��A���\��	(�D���Ȃ����J��Ԃ�)

	<�o�͌���>

	���̐�������͂��Ă��������F-5
	�����łȂ�������͂��Ȃ��ł��������B
	���̐�������͂��Ă��������F17
	*****************
	������x�H�yYes�c0 / No�c9�z :0
	���̐�������͂��Ă��������F5
	*****
	������x�H�yYes�c0 / No�c9�z :9
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int retry;

	do{
		int i, no;

		do{
			printf("���̐�������͂��Ă��������F");
			scanf("%d", &no);
			if (no <= 0)
				puts("\a���łȂ�������͂��Ȃ��ł��������B");
		} while (no <= 0);

		for (i = 1; i <= no; i++)
			putchar('*');
		putchar('\n');

		printf("������x�H�yYes�c0 / No�c9�z :");
		scanf("%d", &retry);
	} while (retry == 0);

	getchar();
	getchar();
	return 0;
}