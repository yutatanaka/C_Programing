
/*
	���̃v���O�����͂ǂ��ɖ�肪����܂����H
	(�Ē��F���̃v���O�����́A��肪����܂����A�x�����o���Ȃ��R���p�C��������̂Œ��ӂ��Ă��������B)
*/

#include <stdio.h>

void sqr_it(int);

int main()
{
	sqr_it(10.0);

	getchar();
	return 0;
}

void sqr_it(int num)
{
	printf("%d", num * num);
}

/*
	����

	sqr_it()�֐��̈����Ő����^���w�肵�Ă��邪�A�֐����Ăяo���ۂɓn���Ă���͕̂��������_�^�ł���
*/