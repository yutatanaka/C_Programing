
/*
	�L�[�{�[�h����Q�̕��������͂��A���̂Q�����������������\������v���O�������쐬���Ȃ����B
	�������A�ŏI�I�ɏo�͂��镶����́Astrcpy()����сAstrcat()�֐���p���āA2�̕�������P�ɓ����������̂ɂ��邱��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* �����^�̃|�C���^�ϐ��̐錾 */
	char *str1;
	char *str2;
	int i;
	/* �������̊m�� */
	str1 = (char *)malloc(sizeof(char *) * 10);
	str2 = (char *)malloc(sizeof(char *) * 10);

	/* ���͏��� */
	printf("������P�F");	scanf("%s", str1);
	printf("������Q�F");	scanf("%s", str2);

	/* �������� */
	strcat(str1, str2);

	printf("�����������ʁF%s", str1);

	/* �������̉�� */
	free(str1);
	free(str2);
	getchar();
	getchar();
	return 0;
}