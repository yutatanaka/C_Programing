
/* 1�`1000�܂ł̑f���̌������߂�B */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sosu(int min, int max)
{
	int i;
	int sum = 0;

	/* ���͂����l��ǂݍ���ł��̉񐔂܂ŌJ��Ԃ� */
	for (i = min; i <= max; i++)
	{
		min /= 10;
		printf("%d", min /= 10);
		sum++;
	}
	return sum;
}

int main()
{
	int i;
	int min, max;
	
	printf("���������͂��Ă��������B\n");
	printf("�ŏ��l�F");		scanf("%d", &min);
	printf("�ő�l�F");		scanf("%d", &max);

	printf("%d�`%d�܂ł̑f���̌���%d�ł��B", min, max, sosu(min, max));

	getchar();
	getchar();
	return 0;
}