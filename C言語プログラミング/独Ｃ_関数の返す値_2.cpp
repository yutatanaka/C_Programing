
/*
	��1.8��2.�̃v���O��������͂��A�R���p�C�����Ď��s���Ă��������B
*/

#include <stdio.h>

void func1();			/* �v���g�^�C�v�錾 */

int main()
{
	func1();

	getchar();
	return 0;
}

void func1()
{
	printf("����͕\�������\n");
	return;
	printf("����͌����ĕ\������Ȃ�");
}