
/*
	���K3-12

	List3-4�̃v���O�������Aif���ł͂Ȃ�switch����p���ď���������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	switch (no % 2)
	{
	case 0:
		puts("���̐��͋����ł��B");   break;

	case 1:
		puts("���̐��͊�ł��B");   break;

	default :
		puts("���̐��͑ΏۊO�ł��B");   break;
	}


	getchar();
	return 0;
}