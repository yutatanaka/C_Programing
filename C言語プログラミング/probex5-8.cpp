
/*
	�L�[�{�[�h����3�̕��������͂����A���̂����ł������������\������v���O���������
	���������������̕����񂪕�������ꍇ�́A���ׂĕ\�������邱��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[3][10];
	int i, count = 1;
	int len[3], maxLen = 0;
	
	/* ���͏��� */
	for (i = 0; i < 3; i++)
	{
		printf("������%d�F", count);	scanf("%s", str[i]);
		count++;
	}
		
	/* �e������̒��������߂āA�ł������������\�� */
	for (i = 0; i < 3; i++)
	{
		len[i] = strlen(str[i]);
		if (len[i] >= maxLen)
		{
			maxLen = len[i];
		}
	}

	printf("\n�����Ƃ�����������F\n");

	for (i = 0; i < 3; i++)
	{
		if (len[i] == maxLen)
		{
			printf("%s\n", str[i]);
		}
	}
	getchar();
	getchar();
	return 0;
}