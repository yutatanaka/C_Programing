
/* 
	�b���ŕ\����鎞�Ԃ���͂��A���ԁA���A�b�ɕϊ����\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int byou = 0;		/* �b�� */
	int h = 0;			/* ���� */
	int m = 0;			/* �� */
	int s = 0;			/* �b */

	printf("�b������͂��Ă��������F");	scanf("%d", &byou);

	/* ���A�]���b�Ƃ��� */
	m = byou / 60;
	s = byou % 60;
	/* ���ԁA�]��𕪂Ƃ��� */
	h = m / 60;
	m = m % 60;

	printf("%d�b = %d���� %d�� %d�b\n", byou, h, m, s);

	getchar();
	getchar();
	return 0;
}