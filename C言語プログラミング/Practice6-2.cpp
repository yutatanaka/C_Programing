
/* 
	�Ј��}�X�^�t�@�C����ǂݍ��݈ꗗ��\������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;		/* �t�@�C���|�C���^�錾 */
	int kensu = 1;	/* ���� */
	char buff[512] = {0};

	printf("         <<<  �Ј��}�X�^�[�ꗗ  >>>\n");
	printf("\n");
	printf("        �ԍ� ���@��          ��{��\n");

	/* �t�@�C��"shain_m.txt"����̓��[�h"��"�ŃI�[�v������ */
	if ((fp = fopen("shain_m.txt", "r")) == NULL)
	{
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}
	
	/* �f�[�^���Ȃ��Ȃ�܂ŃJ�E���^�ƃf�[�^���e��\������ */
	while (fgets(buff, sizeof(buff), fp) != NULL)		/* �ǂݍ��� */
	{
		printf("  %4d  ", kensu);						/* �����\�� */
		puts(buff);										/* �f�[�^�\�� */
		kensu++;										/* �����{�P */
	}

	getchar();
	getchar();
	return 0;
}