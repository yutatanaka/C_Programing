
/*
	���̃v���O������ʊ֐��ɂ��ăv���O�������쐬
	if(a <= b){
		c = a;
	}
	else{
		c = b;
	}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Min(int a, int b)
{
	int c;
	
	if (a <= b)
	{
		c = a;
		return c;
	}
	else
	{
		c = b;
		return c;
	}
}

int main()
{
	int a, b, c;

	puts("��̐����l�����");
	scanf("%d %d", &a, &b);

	printf("�������� = %d\n", Min(a, b));

	getchar();
	return 0;
}