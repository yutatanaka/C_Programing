
/* 
	������Ƃ��Ē�`����Ă���u100�v���A�����̒l�ɕϊ����ďo�͂���v���O����
	�R�����g����Ă��镔���ɁA�s���S�ȕ������������A�v���O����������������
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char numString[] = "100";		/* ���l�̕����� */
	int num;						/* numString�̐��l������ϐ� */

	/* numString�𐮐��l�ɕϊ����Anum�ɑ�� */
	num = atoi(numString);

	printf("%d\n", num);

	getchar();
	return 0;
}