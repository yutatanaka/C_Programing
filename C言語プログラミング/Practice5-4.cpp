
/*
	�L�[�{�[�h������͂�����̐����̍ő���񐔂�\������B
	�Ȃ��A�ő���񐔂����߂�̂ɁAkouyakusu()�֐��Ƃ����ċN�֐��𗘗p����B
	��̐�x��y�̍ő���񐔂����߂�菇�i���[�N���b�h�̌ݏ����j
	�܂��Ax��y�̗]������߂�B�u�]�聂�O�v�Ȃ�A�ux��y�v�uy���]��v�Ƃ���
	�u�]�聁�O�v�ɂȂ�܂�x �� y���J��Ԃ��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �ő���񐔂����߂�֐� */
int kouyakusu(int x, int y)
{
	int amari;
	printf("%3d�@���@%3d =�@�@%d �]��@�@%2d\n", x, y, x / y, x % y);

	amari = x % y;

	if (amari == 0)
	{
		return y;
	}
	else
	{
		return kouyakusu(y, amari);
	}
}

int main()
{
	int suuji1 = 0, suuji2 = 0;				/* �����P�A�����Q */
	int kotae = 0;							/* ���� */

	/* ���͏��� */
	printf("------�ő���񐔂����߂�֐�------\n");
	printf("1�ڂ̐�������͂��Ă��������F");	scanf("%d", &suuji1);
	printf("2�ڂ̐�������͂��Ă��������F");	scanf("%d", &suuji2);

	/*
		�ő���񐔂����߂�֐�(kouyakusu)�ɏ�L�̐����������Ƃ��Ď��s��
		�߂�l(kotae)���󂯎��A�\������ 
	*/
	kotae = kouyakusu(suuji1, suuji2);
	printf("�ő���񐔂�%d�ł��B\n", kotae);
	printf("---------------------------------\n");

	getchar();
	getchar();
	return 0;
}