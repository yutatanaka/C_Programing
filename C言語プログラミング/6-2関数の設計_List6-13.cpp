
/*
	���`�T���i�����T���j
	���o�͌��ʁ�
	��P
	vx[0] : 83
	vx[1] : 55
	vx[2] : 77
	vx[3] : 49
	vx[4] : 25
	�T���l�F49
	49��4�Ԗڂɂ���܂��B
	��Q
	vx[0] : 83
	vx[1] : 55
	vx[2] : 77
	vx[3] : 49
	vx[4] : 25
	�T���l�F16
	���T���Ɏ��s���܂����B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5	/* �v�f�� */
#define FAILED -1	/* �T�����s */

/* ---�v�f�����̔z��v����key�ƈ�v����v�f��T��--- */
int Search(const int v[], int key, int n)
{
	int i = 0;

	while (1)
	{
		if (i == n)
			return FAILED;	/* �T�����s */
		if (v[i] == key)
			return i;		/* �T������ */�@
		i++;
	}
}

int main()
{
	int i, ky, idx;
	int array[NUMBER];

	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] : ", i);
		scanf("%d", &array[i]);
	}
	printf("�T���l�F");
	scanf("%d", &ky);

	idx = Search(array, ky, NUMBER);	/* �v�f��NUMBER�̔z��array����ky��T�� */

	if (idx == FAILED)
	{
		puts("\a�T���Ɏ��s���܂����B");
	}
	else
	{
		printf("%d��%d�Ԗڂɂ���܂��B", ky, idx + 1);
	}

	getchar();
	getchar();
	return 0;
}
