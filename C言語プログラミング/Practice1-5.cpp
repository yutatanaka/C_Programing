
/*
	���O�Ɠ_�����l�����͂��A�_�����傫�����̖��O��\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char namae1[10] = { NULL };
	char namae2[10] = { NULL };
	int tensu1 = 0, tensu2 = 0;

	printf("��l�ڂ̖��O����͂��Ă��������F");	scanf("%s", namae1);
	printf("�_������͂��Ă��������F");			scanf("%d", &tensu1);
	printf("��l�ڂ̖��O����͂��Ă��������F");	scanf("%s", namae2);
	printf("�_������͂��Ă��������F");			scanf("%d", &tensu2);

	if (tensu1 > tensu2)
	{
		printf("%s����̕����傫��\n", namae1);
	}
	else
	{
		printf("%s����̕����傫��\n", namae2);
	}

	getchar();
	getchar();
	return 0;
}