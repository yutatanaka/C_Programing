
/*  
	���K6-2

	�O��int�����l�̍ŏ��l��Ԃ��֐����쐬����B
	int min3(int a. int b, int c) {      }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �ŏ��l��Ԃ��֐� */
int min3(int a, int b, int c)
{
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}

int main()
{
	int a, b, c;

	puts("�O�̐�������͂��Ă��������B");
	printf("����1�F");   scanf("%d", &a);
	printf("����2�F");   scanf("%d", &b);
	printf("����3�F");   scanf("%d", &c);

	printf("�ŏ��l��%d�ł��B\n", min3(a, b, c));

	getchar();
	getchar();
	return 0;
}