
/*  
	probex5-3�Ɠ������ʂ𓾂���v���O�������Astrlen�֐���p���Ȃ��ō��Ȃ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* �|�C���^�ϐ��̐錾 */
	char *string;
	int i, len = 0;
	/* �������m�� */
	string = (char *)malloc(sizeof(char *) * 10);
	
	/* ���͏��� */
	printf("���������́F");	scanf("%s", string);
	
	i = 0;
	while (string[i] != '\0')
	{
		len++;
		i++;
	}

	printf("������̒����F%d����\n", len);

	/* ��������� */
	free(string);
	getchar();
	getchar();
	return 0;
}