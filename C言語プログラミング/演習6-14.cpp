
/*
	���K6-14
	�ÓI�L������Ԃ��^����ꂽdouble�^�z��̑S�v�f��0.0�ŏ���������邱�Ƃ��m�F����v���O�������쐬����B
*/

#include <stdio.h>

int main()
{
	int i;
	static double array[5];

	for (i = 0; i < 5; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}

	getchar();
	return 0;
}