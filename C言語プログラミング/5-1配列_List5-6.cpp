
/*
	�z��̃R�s�[

	�z��̑S�v�f��ʂ̔z��ɃR�s�[

	<�o�͌���>
      a    b
	---------
	  17  17
	  23  23
	  36  36
	   0   0
	   0   0
*/

#include <stdio.h>

int main()
{
	int i;
	int a[5] = { 17, 23, 36 };		/* {17, 23, 36, 0, 0}�ŏ����� */
	int b[5];

	for (i = 0; i < 5; i++)
		b[i] = a[i];

	puts("  a    b ");
	puts("---------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);


	getchar();
	return 0;
}