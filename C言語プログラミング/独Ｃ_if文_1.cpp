
/*
	�L�[�{�[�h������͂��ꂽ����������������𔻒肷��v���O�������쐬���Ă��������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Even_OddNumber(int*);

int main()
{
	int value = 0;
	printf("���l����͂��Ă��������F");
	scanf("%d", &value);
	Even_OddNumber(&value);

	getchar();
	return 0;
}

void Even_OddNumber(int *value)
{
	if (*value % 2 == 0)
	{
		printf("�����ł��B\n", *value);
	}
	else if (*value % 2 != 0)
	{
		printf("��ł��B\n", *value);
	}
}