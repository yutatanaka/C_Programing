
/*
	���Z�q�ƃI�y�����h

	�ǂݍ��񂾓�̐����l�̘a�E���E�ρE���E��]��\��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int vx, vy;

	puts("��̐�������͂��Ă��������B");
	printf("����vx�F");	scanf("%d", &vx);
	printf("����vy�F"); scanf("%d", &vy);

	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx / vy = %d\n", vx / vy);
	printf("vx %% vy = %d\n", vx % vy);

	getchar();
	return 0;
}