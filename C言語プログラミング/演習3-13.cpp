
/*
	���K3-13

	List3-17�̃v���O�������Aif���łȂ�switch����p���ď���������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;
	
	printf("�����ł����F");
	scanf("%d", &month);

	switch (month)
	{
	case 3:
	case 4:
	case 5: puts("�t�ł��B");   break;
	case 6: 
	case 7:
	case 8: puts("�Ăł��B");   break;
	case 9:
	case 10:
	case 11: puts("�H�ł��B");   break;
	case 12:
	case 1:
	case 2: puts("�~�ł��B");   break;
	default: puts("����ȋG�߂͑��݂��܂���B"); break;

	}

	getchar();
	return 0;
}