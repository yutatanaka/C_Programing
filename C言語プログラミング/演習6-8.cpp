
/*  
	���K6-8

	�v�f����n�ł���int�̔z��v�̗v�f�̍ŏ��l��Ԃ��֐����쐬����B
	int min_of(const int v[], int n) {     }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5

/* �ŏ��l��Ԃ��֐� */
int min_of(const int v[], int n)
{
	int i;
	int min = v[0];

	for (i = 1; i < n; i++)
	{
		if (min > v[i])
		{
			min = v[i];
		}
	}
	return min;
}

int main()
{
	int i;
	int array[NUMBER];
	int min_array;

	printf("5�̐�������͂��Ă��������B\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] :", i);	scanf("%d", &array[i]);
	}
	
	min_array = min_of(array, NUMBER);

	printf("���̔z��̗v�f�̍ŏ��l��%d�ł��B", min_array);

	getchar();
	getchar();
	return 0;
}