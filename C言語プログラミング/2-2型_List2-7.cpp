
/*
	double�^�̉��Z

	��̎����l��ǂݍ���Řa�E���E�ρE��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double vx, vy;		/* ���������_�� */

	puts("��̎�������͂��Ă��������B");
	printf("����vx�F");		scanf("%lf", &vx);
	printf("����vy�F");		scanf("%lf", &vy);

	printf("vx + vy = %f\n", vx + vy);
	printf("vx - vy = %f\n", vx - vy);
	printf("vx * vy = %f\n", vx * vy);
	printf("vx / vy = %f\n", vx / vy);

	getchar();
	return 0;
}