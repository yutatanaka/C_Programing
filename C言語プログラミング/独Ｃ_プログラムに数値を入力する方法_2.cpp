
/*
	2�̕��������_��(float�^)����͂��Ă��̍��v��\������v���O�������쐬����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b;

	printf("1�ڂ̐��l�F");	scanf("%f", &a);
	printf("2�ڂ̐��l�F");	scanf("%f", &b);

	printf("��̍��v�F%f", a + b);

	getchar();
	return 0;
}