
/* 
	��1.7��2.�̃v���O��������͂��A�R���p�C�����Ď��s���Ă�������
	3�̊֐������v���O����
*/

#include <stdio.h>

void func1(void);		/* �v���g�^�C�v */
void func2(void);

int main()
{
	func2();
	printf("3");

	getchar();
	return 0;
}

void func2()
{
	func1();
	printf("2 ");
}

void func1()
{
	printf("1 ");
}