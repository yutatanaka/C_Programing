
/*
	���K6-6

	�x���n��A�����Ĕ�����֐����쐬����B
		void alert(int n) {    }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void alert(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		putchar('\a');
	}
}

int main()
{
	int num;
	printf("����x���炵�܂����H:");
	scanf("%d", &num);

	alert(num);

	getchar();
	getchar();
	return 0;
}