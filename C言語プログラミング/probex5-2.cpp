
/* 
	probex5-1�Ɠ������ʂ𓾂���v���O�������Astrcpy()��strcat�֐��Ƃ������A�����񑀍�֐���p�����ɍ��Ȃ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* �|�C���^�ϐ��̐錾 */
	char *str1;
	char *str2;
	char *string;
	int i, j;
	int len1, len2;
	/* �������m�� */
	str1 = (char *)malloc(sizeof(char *) * 10);
	str2 = (char *)malloc(sizeof(char *) * 10);
	string = (char *)malloc(sizeof(char *) * 10);

	/* ���͏��� */
	printf("������P�F");	scanf("%s", str1);
	printf("������Q�F");	scanf("%s", str2);

	/* �������� */
	i = 0;
	while (str1[i] != '\0')
	{
		string[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		string[i + j] = str2[j];
		j++;
	}

	string[i + j] = '\0';
	
	/* �\������ */
	printf("�����������ʁF %s\n", string);

	/* ��������� */
	free(str1);
	free(str2);
	free(string);
	getchar();
	getchar();
	return 0;
}