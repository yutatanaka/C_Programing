
/*
	���K3-5

	�������Z�q��֌W���Z�q���A1���邢��0�̒l�𐶐����邱�Ƃ��m�F����v���O�������쐬����B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	int num1, num2, num3, min;

	puts("����1�F");   scanf("%d", &num1);
	puts("����2�F");   scanf("%d", &num2);
	puts("����3�F");   scanf("%d", &num3);

	min = num1;
	if (num2 < min)
	{
		min = num2;
	}
	if (num3 < min)
	{
		min = num3;
	}

	printf("�ŏ��l��%d�ł��B\n", min);
	*/

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a < b);
	printf("%d\n", c);

	c = (a > b);
	printf("%d\n", c);

	c = (a == b);
	printf("%d\n", c);

	getchar();
	return 0;
}