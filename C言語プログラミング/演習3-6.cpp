
/*
	���K3-6
	
	�O�̐����l��ǂݍ���ŁA���̍ŏ��l�����߂ĕ\������v���O�������쐬����B
	��if���𗘗p���邱��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, min;

	puts("�O�̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &n1);
	printf("����2�F");   scanf("%d", &n2);
	printf("����3�F");   scanf("%d", &n3);

	min = n1;

	if (n2 < min)
	{
		min = n2;
	}
	if (n3 < min)
	{
		min = n3;
	}

	printf("�ő�l��%d�ł��B\n", min);

	getchar();
	return 0;
}