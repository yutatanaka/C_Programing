
/*
	���K6-9

	�v�f�������ł���int�̔z��v�̗v�f�̕��т𔽓]����֐����쐬����B
		void rev_intary(int v[], int n) {     }
	List5-8�Ɖ��K5-5���Q�l�ɂ��邱��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 7

void rev_intary(int v[], int n)
{
	int i;
	int tmp = 0;

	for (i = 0; i < NUMBER / 2; i++)
	{
		tmp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = tmp;
	}
}

int main()
{
	int i;
	int array[NUMBER];
	
	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] :", i);	scanf("%d", &array[i]);
	}

	rev_intary(array, NUMBER);
	printf("���]���܂����B\n");

	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}

	getchar();
	getchar();
	return 0;
}
