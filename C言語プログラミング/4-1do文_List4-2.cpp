
/*
	���͈͂̒l�̓ǂݍ���

	�ǂݍ��񂾐����l�ɉ����ăW�����P���̎��\��(0, 1, 2�݂̂��󂯓����)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hand;	/* �� */

	do{
		printf("���I��ł��������y0�c�O�[ / 1�c�`���L / 2����p�[�z�F");
		scanf("%d", &hand);
	} while (hand < 0 || hand > 2);

	printf("���Ȃ���");
	switch (hand)
	{
	case 0: printf("�O�[");   break;
	case 1: printf("�`���L"); break;
	case 2: printf("�p�[");   break;
	}
	printf("��I�т܂����B\n");

	getchar();
	return 0;
}