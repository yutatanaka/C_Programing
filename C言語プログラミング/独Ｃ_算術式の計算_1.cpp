
/*
	�����̂̑̐ς��v�Z����v���O�������쐬���Ă��������B
	���ꂼ��̕ӂ̐��@����͂���悤���[�U�[�ɗv��������̂Ƃ��܂��B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int sum;
	printf("��ڂ̕ӁF");	scanf("%d", &a);
	printf("��ڂ̕ӁF");	scanf("%d", &b);
	printf("�O�ڂ̕ӁF");	scanf("%d", &c);

	sum = a * b * c;

	printf("�����̂̑̐ς́F%d", sum);

	getchar();
	getchar();
	return 0;
}