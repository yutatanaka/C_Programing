
/*
	probex5-5.�Ɠ������ʂ���������̂��Astrcmp()�֐���p�����ɍ��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* �|�C���^�ϐ��̐錾 */
	char *str1, *str2;
	int i;
	
	/* �������̊m�� */
	str1 = (char *)malloc(sizeof(char *));
	str2 = (char *)malloc(sizeof(char *));

	/* ���͏��� */
	printf("������P�F");	scanf("%s", str1);
	printf("������Q�F");	scanf("%s", str2);

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
		{
			printf("�������̂ł�\n");
			return 0;
		}
		i++;
	}
	printf("�Ⴄ���̂ł�\n");

	/* ��������� */
	free(str1);
	free(str2);
	getchar();
	return 0;
}