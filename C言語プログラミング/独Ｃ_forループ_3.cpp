
/*
	��2.4��2.�̑f���e�X�^���Q�l�ɂ��āA1�Ƃ��̐����g���������ׂĂ̖񐔂�\������
	�v���O�������쐬���Ă��������B���Ƃ��΁A8�����͂��ꂽ��2��4��\������悤�ɂ��܂��B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0, i;

	for (; num <= 1;)
	{
		printf("���肵����������͂��Ă��������F");
		scanf("%d", &num);
	}

	/* �񐔂����邩�ǂ����𒲂ׂ� */
	for (i = 2; i <= num / 2; i = i + 1)
	{
		
		if ((num % i) == 0)
		{
			printf("%d\n", i);
		}
	}

	getchar();
	return 0;
}