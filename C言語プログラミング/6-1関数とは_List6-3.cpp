
/*
	�֐��̕ԋp�n�������Ƃ��Ċ֐��ɓn��

	��̐�����2��l�̍������߂�
	<�o�͌���>
	��̐�������͂��Ă��������B
	����x�F4
	����y�F5
	x��2���y��2��̍���9�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ---x��2��l��Ԃ�--- */
int sqr(int x)
{
	return x * x;
}

/* ---x��y�̍���Ԃ�--- */
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a;		/* �傫���ق����珬�����ق������� */
}

int main()
{
	int x, y;

	puts("��̐�������͂��Ă��������B");
	printf("����x�F");   scanf("%d", &x);
	printf("����y�F");   scanf("%d", &y);

	printf("x��2���y��2��̍���%d�ł��B\n", diff(sqr(x), sqr(y)));

	getchar();
	getchar();
	return 0;
	
}