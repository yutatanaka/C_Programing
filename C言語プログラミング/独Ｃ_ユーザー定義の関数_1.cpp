
/*
	��1.7��1.�̃v���O��������͂��A�R���p�C�����Ď��s���Ă��������B
*/

#include <stdio.h>

void func1(void);	/* func1()�̃v���g�^�C�v */

int main()
{
	printf("����");
	func1();
	printf("�D���ł�");

	getchar();
	return 0;
}

void func1(void)
{
	printf("C��");
}