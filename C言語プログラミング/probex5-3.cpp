
/*  
	�L�[�{�[�h���當�������͂��A���̕�����̒�����\������v���O���������B���̎�strlen()�֐���p���邱��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* �|�C���^�ϐ��̐錾 */
	char *string;
	int len;

	/* �������m�� */
	string = (char *)malloc(sizeof(char *) * 10);

	/* ���͏��� */
	printf("���������́F");	scanf("%s", string);
	/* ������̒��������߂� */
	len = strlen(string);

	printf("������̒����F%d����\n", len);

	/* ��������� */
	free(string);
	getchar();
	return 0;
}