
/*
	switch����break�����̂Q

	�ǂݍ��񂾐����l��3�Ŋ�������]��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;
	
	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	switch (no % 3)
	{
	case 0: 
		puts("���̐���3�Ŋ���؂�܂�");
		break;
	case 1:
		puts("���̐���3�Ŋ�������]��1�ł��B");
		break;
	case 2:
		puts("���̐���3�Ŋ�������]��2�ł��B");
		break;
	}

	getchar();
	return 0;
}