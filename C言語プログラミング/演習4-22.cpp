
/*
	���K4-22�@(List4-18����������)

	List4-18�����List4-19�����������āA���㑤����щE�㑤�����p�ƂȂ�
	���p�񓙕ӎO�p�`��\������v���O�������쐬����B
	(���ꂼ��ʂ̃v���O�����Ƃ��č쐬���邱�ƁB)

	<�o�͌���>
	
	���㒼�p�񓙕ӎO�p�`�����܂��B
	�Z�ӁF5
	*****
	****
	***
	**
	*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, len;

	puts("���㒼�p�񓙕ӎO�p�`�����܂��B");
	printf("�Z�ӁF");   
	scanf("%d", &len);
	
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}