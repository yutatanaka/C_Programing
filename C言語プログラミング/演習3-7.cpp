
/*
	���K3-7

	�l�̐����l��ǂݍ���ŁA���̍ő�l�����߂ĕ\������v���O�������쐬����B
	��if���𗘗p���邱��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, max;

	puts("�l�̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);
	printf("����3�F");   scanf("%d", &n3);
	printf("����4�F");   scanf("%d", &n4);

	max = n1;
	if (n2 > max)
	{
		max = n2;
	}
	if (n3 > max)
	{
		max = n3;
	}
	if (n4 > max)
	{
		max = n4;
	}

	printf("�ő�l��%d�ł��B", max);

	getchar();
	return 0;
}