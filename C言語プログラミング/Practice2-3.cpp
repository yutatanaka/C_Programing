
/* 
	���O�A�g����5�l�����͂��A�ł������l�̖��O�Ɛg����\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int max = 0;					/* �ō��g�� */
	int sincho[5] = { 0 };			/* �g�� */
	char namae[10];					/* ���O */
	char max_namae[10];	/* �ō��g���̐l�̖��O */
	int i;

	printf("���O�Ɛg������͂���B\n");
	/* 5�񖼑O�Ɛg������͂��� */
	for (i = 1; i < 6; i++)
	{
		printf("%d�l�ڂ̏�����͂��Ă�������\n", i);
		printf("���O�F");	scanf("%s", namae);
		printf("�g���F");	scanf("%d", &sincho[i - 1]);
		if (max < sincho[i - 1])
		{
			max = sincho[i - 1];
			strcpy(max_namae, namae);
		}
	}
	printf("�g������ԍ����̂�%s�����%dcm�ł��B\n", max_namae, max);


	getchar();
	getchar();
	return 0;
}