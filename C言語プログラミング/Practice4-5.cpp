
/*  
	�N(����)�A���A������͂��A��������̌o�ߓ����ƔN���܂ł̎c���������߂�B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int matubi_t[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };/* �����e�[�u�� */
	int year = 0, month = 0, day = 0;	/* �N�A���A�� */
	int zansu = 365;					/* �c�� */
	int nissu;							/* �o�ߓ��� */

	/* ���͏��� */
	printf("--------------�o�ߓ����Ǝc�����v�Z--------------\n");
	printf("�N(����)����͂��Ă��������\�\�\��");	scanf("%d", &year);
	printf("�@�@�@������͂��Ă��������\�\�\��");	scanf("%d", &month);
	printf("�@�@�@������͂��Ă��������\�\�\��");	scanf("%d", &day);

	/* ���邤�N�̔���(���邤�N�̂Ƃ��͖����e�[�u����2���̗���29�A�c����366���i�[����) */
	if (year / 400 == 0 || year / 100 != 0 && year % 4 == 0)
	{
		matubi_t[2] = 29;
		zansu = 366;
	}
	/* �o�ߓ����Ǝc�������߂� */
	/* �o�ߓ���(nissu)��0���i�[���� */
	nissu = 0;
	/* �o�ߌ������̖���������ɉ��Z���� */
	for (int i = 0; i < month; i++)
	{
		nissu += matubi_t[i]; 
	}
	/* ���͂�����(day)���o�ߓ����ɉ��Z���� */
	nissu += day;
	/* �c������o�ߓ��������� */
	zansu -= nissu;

	/* �o�ߓ����Ǝc������L���C�A�E�g�ɂ��������ĕ\������ */
	printf("�@�@�@�o�ߓ�����%d���ł��B\n", nissu);
	printf("�@�@�@�@�c������%d���ł��B\n", zansu);

	getchar();
	getchar();
	return 0;
}