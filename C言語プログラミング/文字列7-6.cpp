
/*  
	���������͂��A���̕�����̒���(������)��\������v���O�������쐬���Ȃ���
	�� �W���֐����g�p���Ȃ�����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* �|�C���^�ϐ��̐錾 */
	char *string;
	int i, len;
	/* �������̊m�� */
	string = (char *)malloc(50);
	
	/* ���͏��� */
	printf("���������́F");	scanf("%s", string);
	
	i = 0;
	len = 0;
	/* ������̒�����}�� */
	while (string[i] != '\0')
	{
		len++;
		i++;
	}

	printf("������%s�̒����F%d", string, len);

	/* �������̉�� */
	free(string);
	getchar();
	getchar();
	return 0;
}