
/* 
	����N����͂��AN!�iN�̊K��j�����߂�B�֐��𗘗p���ċN�������s���B
	�E�ċN�����Ƃ́A�֐������ōĂю��Ȃ̊֐����Ăяo�����@�������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �K������߂�֐� */
int kaijo(int n)
{
	/* n���O�ł���� */
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * kaijo(n - 1);
	}
}

int main()
{
	unsigned int suuji = 0, kotae = 0;			/* �����A���� */
	
	/* ���͏��� */
	printf("��������͂��Ă�������---��");	scanf("%d", &suuji);

	/* �����������Ƃ��ĊK������߂�֐�(kaijo)�����s������(kotae)�Ɏ󂯎�� */
	kotae = kaijo(suuji);

	printf("%d�̊K���%d�ł��B\n", suuji, kotae);

	getchar();
	getchar();
	return 0;
}