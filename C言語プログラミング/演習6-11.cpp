
/*
	���K6-11

	�v�f�����̔z�񂖓���key�Ɠ������S�v�f�̓Y����z��idx�Ɋi�[����֐�Search_idx���쐬����B
	�ԋp����̂�key�Ɠ������v�f�̌��Ƃ���B
		int Search_idx(const int v[], int idx[], int key, int n);
	�Ⴆ�΁Av�Ɏ󂯎�����z��̗v�f��{1, 7, 5, 7, 2, 4, 7}��key��7�ł���΁Aidx��{1, 3, 6}���i�[�������3��ԋp����B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 7

int Search_idx(const int v[], int idx[], int key, int n)
{
	int i;

	for (i = 0; i < NUMBER; i++)
	{
		if (v[i] == key)
		{
			idx[n] = i;
			n++;
		}
	}
	return n;
}

int main()
{
	int i, key, n = 0;
	int v[NUMBER];
	int idx[NUMBER];

	for (i = 0; i < NUMBER; i++)
	{
		printf("v[%d] :", i);
		scanf("%d", &v[i]);
	}
	printf("�T���l�F");
	scanf("%d", &key);

	n = Search_idx(v, idx, key, n);

	printf("key�Ɠ������v�f�̐���%d�ŁAidx�̒��g��{", n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", idx[n - 1]);
			break;
		}
		printf("%d, ", idx[i]);
	}
	printf("}�ł��B\n");

	getchar();
	getchar();
	return 0;
}