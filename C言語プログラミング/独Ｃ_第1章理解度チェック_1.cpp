
/*
	1�D���ʂ̏d�͂͒n���̖�17���ł��B�����̑̏d����͂���ƌ��ʂł̎����̏d���v�Z����v���O�������쐬���Ă��������B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputNum();

int main()
{
	int heavy = 0;

	heavy = InputNum();

	heavy = heavy * 0.17;

	printf("%d", heavy);

	getchar();
	return 0;
}

/* ���͊֐� */
int InputNum()
{
	int num;
	printf("�̏d����͂��Ă��������F");
	scanf("%d", &num);

	return num;
}