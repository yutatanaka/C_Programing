
/*
	���K8-3
	type�^�̓�̒l����������A�֐��`���}�N�����ȉ��̌`���Œ�`����B
		swap(type, a, b)
	���Ƃ��΁Aint�^�̕ϐ�x, y�̒l��5��10�ł���Ƃ��Aswap(int, x, y)���Ăяo������́A
	x��y�ɂ�10��5���i�[����Ă��Ȃ���΂Ȃ�Ȃ�
*/

#include <stdio.h>
#define swap(type, a, b) {	\
	type temp = (x);		\
	(x) = (y);				\
	(y) = temp;				\
}							

int main()
{
	int x = 5;
	int y = 10;

	swap(int, x, y);
	printf("��̐����̒l��x = %d, y = %d\n", x, y);

	getchar();
	return 0;
}