
/*
	1���珇�Ԃɐ���\������
	���̐���3�Ŋ���؂��Ȃ�"Fizz"�A5�Ŋ���؂��Ȃ�"Buzz"�A�����Ŋ���؂��Ȃ�"FizzBuzz"�ƕ\������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int n;				/* ���͗p�ϐ� */
	
	printf("���񃋁[�v�F");	scanf("%d", &n);
	
	/* n�񃋁[�v */
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
				printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
	
		else
		{
			printf("%d\n", i);
		}
	}
	getchar();
	getchar();
	return 0;
}