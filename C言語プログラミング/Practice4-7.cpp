
/*  
	�p��������ƕ���������͂���B
	���͂����p����������w�肳�ꂽ������������ɃX���C�h��������̈Í������s���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int BUFF_MAX = 54;
	int i = 0, j = 0, k = 0, mozisu = 0;		/* ������ */
	char input_buff[BUFF_MAX] = { 0 };			/* ���͕����� */
	char output_buff[BUFF_MAX] = { 0 };			/* �o�͕����� */
	const char moziretu[BUFF_MAX] = "abcdefghijklmnopqrstyvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0"; /* ����ð��� */

	/* ���͏��� */
	printf("-----------------�Í���-----------------\n");
	printf("�p������͂��Ă��������B\n");	fgets(input_buff, BUFF_MAX, stdin);
	printf("�X���C�h���镶��������͂��Ă��������\�\�\��");	scanf("%d", &mozisu);

	/* �����������A��r */
	for (i = 0; input_buff[i] != '\0'; i++)
	{
		output_buff[i] = input_buff[i];
		
		for (j = 0; j < 54; j++)
		{
			if (input_buff[i] == moziretu[j])
			{
				k = j + mozisu;
				if (k >= 52)
				{
					k -= 52;
				}
				output_buff[i] = moziretu[k];
			}
		}
	}
	
	printf("------------�Í�����̕�����------------\n");
	printf("\n");
	printf("%s", output_buff);
	printf("\n");
	printf("----------------------------------------\n");

	getchar();
	getchar();
	return 0;
}