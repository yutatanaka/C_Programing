
/*
	���̃��b�Z�[�W��\������v���O�������쐬���Ă��������B
	�������A�v���O���������Ȃ��Ƃ��Q�̊֐��ō\�����Ă��������B
*/

#include <stdio.h>

void func1();				/* �v���g�^�C�v */
void func2();					
void func3();

int main()
{
	func1();

	getchar();
	return 0;
}

void func1()
{
	printf("�đ���@");
	func2();
}

void func2()
{
	printf("�͂��̂ǂ����@");
	func3();
}

void func3()
{
	printf("���̐�");
}