
/*
	outnum()�Ƃ����֐����g�p����v���O�������쐬���Ă��������B
	���̊֐���1�̐����^�̈��������A���̒l����ʂɕ\��������̂Ƃ��܂�
*/
#include <stdio.h>

void Outnum(int num)
{

	printf("%d", num);
}

int main()
{
	int num = 10;
	Outnum(num);

	getchar();
	return 0;
}