
/*
	���������󂯎��Ȃ��֐�

	�ǂݍ��񂾐��̐����l���t���ɕ\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*  ---���̐�����ǂݍ���ŕԂ�--- */
int scan_pint()
{
	int tmp;
	
	do{
		printf("���̐�������͂��Ă��������F");
		scanf("%d", &tmp);
		if (tmp <= 0)
		{
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
		}
	} while (tmp <= 0);

	return tmp;
}

/* ---�񕉂̐����𔽓]�����l��Ԃ�--- */
int rev_int(int num)
{
	int tmp = 0;

	if (num > 0)
	{
		do{
			tmp = tmp * 10 + num % 10;
			num /= 10;

		} while (num > 0);
	}
	return tmp;
}


int main()
{
	int nx = scan_pint();

	printf("���]�����l��%d�ł��B\n", rev_int(nx));

	getchar();
	getchar();
	return 0;
}