
/*
	����N����͂��A1����N�܂ł̑��a�����߂�B�֐��𗘗p���ċN�������s���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ���a�����߂�֐� */
int Souwa(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + Souwa(n - 1);
	}
}

int main()
{
	int suuji = 0, kotae = 0;			/* �����A���� */
	
	/* ���͏��� */
	printf("------------���a�����߂�֐�------------\n");
	printf("��������͂��Ă�������--->");	scanf("%d", &suuji);
		
	/* �����������Ƃ��đ��a�����߂�֐�(souwa)�����s������(kotae)�Ɏ󂯎�� */
	kotae = Souwa(suuji);

	/* ����(���a�̌���) (kotae)��\������*/
	printf("1�`%d�܂ł̑��a��%d�ł��B", suuji, kotae);

	getchar();
	getchar();
	return 0;
}