
/*  
	���K6-4

	int�^������4��l��Ԃ��֐����쐬����B
		int pow4(int x) {     }
	�֐��̓����ŁAList6-3�Ɏ������֐�sqr�𗘗p���邱��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 4��l��Ԃ��֐� */
int pow4(int x)
{
	return x * x * x * x;
}

int main()
{
	int n1;

	puts("��������͂��Ă��������B");
	printf("�����F");   scanf("%d", &n1);

	printf("���͂�������4�悵������%d�ł��B\n", pow4(n1));

	getchar();
	getchar();
	return 0;
}