
/* 
	�����A�����A���Ԃ���͂��A�������v�̌v�Z���s���\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int gankin = 0, ritu = 0, kikan = 0;					/* �����A�����A���� */
	int goukei = 0;											/* ���v */
	int i;

	/* ���͏��� */
	printf("���͂��Ă��������B\n");
	printf("����(�~)��");	scanf("%d", &gankin);
	printf("����(��)��");	scanf("%d", &ritu);
	printf("����(�N)��");	scanf("%d", &kikan);

	goukei = gankin;

	/* ���Ԃ̉񐔂������̏������J��Ԃ� */
	for (i = 1; i <= kikan; i++)
	{
		goukei = goukei * (100 + ritu) / 100;
	}

	/* �������v��\������ */
	printf("�������v��%d �~\n", goukei);

	getchar();
	getchar();
	return 0;
}