
/*
	�L�������

	�����L������ԂƐÓI�L�������
	<�o�͌���>
	 ax sx fx
	----------
	  0  0  0
	  0  1  1
	  0  2  2
	  0  3  3
	  0  4  4
	  0  5  5
	  0  6  6
	  0  7  7
	  0  8  8
	  0  9  9
	----------
*/

#include <stdio.h>

int fx = 0;					/* �ÓI�L������ԁ{�u���b�N�L���͈� */

void func()
{
	static int sx = 0;		/* �ÓI�L������ԁ{�u���b�N�L���͈� */
	int		   ax = 0;		/* �����L������ԁ{�u���b�N�L���͈� */

	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main()
{
	int i;
	
	puts(" ax sx fx");
	puts("----------");
	for (i = 0; i < 10; i++)
	{
		func();
	}
	puts("----------");

	getchar();
	return 0;
}