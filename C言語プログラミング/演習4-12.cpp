
/*
	���K4-12

	���̐����l��ǂݍ���ŁA���̌�����\������v���O�������쐬����B
	���q���g�FList4-10�̃v���O������whike���̌J��Ԃ��̉񐔂́Ano�̌����ƈ�v����B

	<�o�͌���>

	���̐�������͂��Ă��������F1963
	1963��4���ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;
	int cnt = 0;

	do{
		printf("���̐�������͂��Ă��������F");
		scanf("%d", &no);

		if (no <= 0)
		{
			printf("\a���łȂ�������͂��Ȃ��ł��������B");
		}
	} while (no <= 0);

	printf("%d��", no);
	while (no > 0)
	{
		no /= 10;
		cnt++;
	}

	printf("%d���ł��B", cnt);
	getchar();
	return 0;
}