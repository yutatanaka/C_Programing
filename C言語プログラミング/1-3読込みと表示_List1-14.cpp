
/*
	puts�֐��F�\�����s���֐����̂Q

	�ǂݍ��񂾓�̐����l�̘a(���Z����)��ϐ��Ɋi�[���ĕ\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;
	int wa;		/* �a */

	puts("��̐�������͂��Ă��������B");
	printf("����1�F");	scanf("%d", &n1);
	printf("����2�F");	scanf("%d", &n2);

	wa = n1 + n2;								/* n1��n2�̘a���� */

	printf("�����̘a��%d�ł��B\n", wa);		/* �a��\�� */

	getchar();
	return 0;
}