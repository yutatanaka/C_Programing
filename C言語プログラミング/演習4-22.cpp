
/*
	���K4-22

	List4-17�̃v���O���������������āA�����̒����`��\������v���O�������쐬����B
	����̕ӂ̒�����ǂݍ���ŁA�������ق����s���Ƃ��āA�傫���ق���񐔂Ƃ��邱��

	<�o�͌���>

	�����̒����`�����܂��B
	���(���̂P) :7
	���(���̂Q) :3
	*******
	*******
	*******
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	int height, width;
	int n1, n2;

	puts("�����̒����`�����܂��B");
	printf("���(���̂P) :");   scanf("%d", &n1);
	printf("���(���̂Q) :");   scanf("%d", &n2);

	if (n1 > n2)
	{
		width = n1;
		height = n2;
	}
	else if (n2 > n1)
	{
		width = n2;
		height = n1;
	}
	else
	{
		width = n1;
		height = n2;
	}

	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= width; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	
	getchar();
	getchar();
	return 0;
}