
/*
	���̃R�[�h�ɒǉ����A���͂��ꂽ���l��16����2�i���ŕ\������v���O�������쐬�����Ȃ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char sbinary[17];
	int value;
	int i;

	printf("���l����́F");	scanf("%d", &value);

	/* �z�� sbinary��'0'��'1'�������� */
	for (i = 15; i >= 0; i--)
	{
		sbinary[i] = '0' + (value % 2);
		value /= 2;
	}

	sbinary[16] = 0;

	printf("%s", sbinary);

	getchar();
	getchar();
	return 0;
}