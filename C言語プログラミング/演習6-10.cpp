
/*
	���K6-10

	�v�f����n�ł���int�̔z��v2�̕��т𔽓]�������̂�z��v1�Ɋi�[����֐����쐬����B
		void intary_rcpy(int v1[], conts int v2[], int n) {    }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5

void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;
	int tmp;

	/* �z��v2��z��v1�Ɋi�[ */
	for (i = 0; i < n; i++)
	{
		v1[i] = v2[i];
	}
	
	/* �z��̗v�f���𔽓]������ */
	for (i = 0; i < n / 2; i++)
	{
		tmp = v1[i];
		v1[i] = v1[n - i - 1];
		v1[n - i - 1] = tmp;
	}
}

int main()
{
	int i;
	int array[NUMBER];
	int revers_array[NUMBER];

	printf("�z��̗v�f����͂��Ă��������B\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] :", i);	scanf("%d", &array[i]);
	}

	intary_rcpy(revers_array, array, NUMBER);

	for (i = 0; i < NUMBER; i++)
	{
		printf("revers_array[%d] = %d\n", i, revers_array[i]);
	}

	getchar();
	getchar();
	return 0;
}