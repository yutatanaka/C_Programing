
/*  
	�ڕW�����z�ƌ��X�̒����z����͂���B���N�������ŒB�����邩��\������B
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int mokuhyou = 0, chokin = 0;						/* �ڕW���z�A���X�̒����z */
	int goukei = 0, kikan = 0;							/* ���v�A���� */
	int year = 0, month;								/* �N�A�� */

	/* �ڕW���z�ƌ��X�̒����z����͂��� */
	printf("�ڕW���z��");	scanf("%d", &mokuhyou);
	printf("�����z��");		scanf("%d", &chokin);

	/* �ڕW���z�����v���z��葽���Ȃ�܂Ŏ��̏������J��Ԃ� */
	/*
	while (mokuhyou > goukei)
	{
		goukei += chokin;
		++kikan;
	}
	*/

	kikan = mokuhyou / chokin ;

	/* ����(����)���N�ƌ��������߂� */
	if (kikan >= 12)
	{
		year = kikan / 12;
		month = kikan % 12;
		printf("%d�N�@%d�����ł�\n", year, month);
	}
	else
	{
		printf("%d�����ł��B\n", kikan);
	}

	getchar();
	getchar();
	return 0;
}