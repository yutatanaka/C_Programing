
/*
	�����T��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5	/* �v�f�� */
#define FAILED -1	/* �T�����s */

/* ---�v�f�����̔z�񂩂�key�ƈ�v����v�f��T������--- */
int Search(int v[], int key, int n)
{
	int i = 0;

	v[n] = key;		/* �ԕ����i�[ */

	while (1)
	{
		if (v[i] == key)
		{
			break;	/* �T������ */
		}
		i++;
	}
	return (i < n) ? i : FAILED;
}

int main()
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++)
	{
		printf("vx[%d] :", i);
		scanf("%d", &vx[i]);
	}
	printf("�T���l�F");
	scanf("%d", &ky);

	if ((idx = Search(vx, ky, NUMBER)) == FAILED)
	{
		puts("\a�T���Ɏ��s���܂����B");
	}
	else
	{
		printf("%d��%d�Ԗڂ̂���܂��B\n", ky, idx + 1);
	}

	getchar();
	getchar();
	return 0;
}