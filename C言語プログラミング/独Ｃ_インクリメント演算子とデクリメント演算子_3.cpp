
/*
	���K���2.4��3.�̓������C���N�������g���Z�q�܂��̓f�N�������g���Z�q���g���ď��������Ă��������B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;

	do
	{
		printf("���肵����������͂��Ă��������F");
		scanf("%d", &num);
	} while (num <= 1);
	
	for (i = 2; i <= num / 2; i++)
	{
		if ((num % i) == 0)
		{
			printf("%d\n", i);
		}
	}

	getchar();
	return 0;
}