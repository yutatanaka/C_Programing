
/*
	�_������͂���B�_����100�`80�̂Ƃ��]����"A"
	79�`60�̂Ƃ�"B"
	59�`0�̂Ƃ�"C"
	��\������
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int tensu;
	while (1)
	{
		printf("�_������͂��Ă��������F");	scanf("%d", &tensu);

		if (tensu >= 80 && tensu <= 100)
		{
			printf("�_��:%d �]��:A\n", tensu);
			break;
		}
		else if (tensu >= 60 && tensu <= 79)
		{
			printf("�_��:%d �]��:B\n", tensu);
			break;
		}
		else if (tensu >= 0 && tensu <= 59)
		{
			printf("�_��:%d �]��:C\n", tensu);
			break;
		}
		else
		{
			continue;
		}
	}
	getchar();
	return 0;
}