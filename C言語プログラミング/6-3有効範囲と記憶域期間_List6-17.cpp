
/*
	�L���͈͂Ǝ��ʎq�̉���

	���ʎq�̗L���͈͂��m�F����
	���o�͌��ʁ�
	x = 75
	x = 999
	x = 0
	x = 100
	x = 200
	x = 300
	x = 400
	x = 999
*/

#include <stdio.h>

int x = 75;						/* A : �t�@�C���L���͈� */

void print_x()
{
	printf("x = %d\n", x);
}

int main()
{
	int i;
	int x = 999;				/* B : �u���b�N�L���͈� */

	print_x();

	printf("x = %d\n", x);

	for (i = 0; i < 5; i++)
	{
		int x = i * 100;		/* C : �u���b�N�L���͈�*/
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);

	getchar();
	return 0;
}
