
/*
	����(�ő�9��)����͂��A3�����ƂɃJ���}��}�����\������B
	�ҏW���s���֐�����henshu�Ƃ���B
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �֐��̃v���g�^�C�v�錾 */
void Henshu(int suuji, char *moji)
{
	int i, j, k;
	int suuji0 = 0, suuji1 = 0;			/* ����0�A����1 */
	char suuji_t[] = "0123456789";		/* �����e�[�u�� */
	char mojiretu[13] = { 0 };			/* ������ */

	/* �󂯎��������(suuji)��0�ȏ�Ȃ炻�̂܂ܐ���0(suuji0)�� */
	if (suuji > 0)
	{
		suuji0 = suuji;
	}
	/* 0����(�}�C�i�X)�Ȃ�v���X�ɂ��Đ���0(suuji0)�Ɋi�[���� */
	else if (suuji < 0)
	{
		suuji0 = 0 - suuji;
	}

	for (i = 0, j = 0; i < 13 && suuji0 != 0; i++, j++)
	{
		/* ����0��10�Ŋ���A���𐔎�0(suuji0)�ցA�]��𐔎�1(suuji1)�֊i�[ */
		suuji1 = suuji0 % 10;
		suuji0 = suuji0 / 10;

		/* ����1(suuji1)�𕶎��ɕϊ���������imojiretu)�֊i�[ */
		mojiretu[j] = suuji_t[suuji1];

		/* ����0(suuji0)��0�łȂ��Ƃ��́A3�����Ɓu (i + 1) % 3 == 0 �v
		�@ �ɓY����j��+1���A�J���}�𕶎���֊i�[ */
		if ((i + 1) % 3 == 0 && suuji0 != 0)
		{
			j++;
			mojiretu[j] = ',';
		}
	}

	/* ����(suuji)���}�C�i�X�̂Ƃ��̓}�C�i�X�����𕶎���֊i�[���� */
	if (suuji < 0)
	{
		mojiretu[j] = '-';
		j++;
	}

	/* ������(mojiretu)�̍Ō��'\0'���i�[���� */
	mojiretu[j] = '\0';

	/* ������(mojiretu)���ŏI���ʂ̕���(moji)�ɕϊ�����
	�@ ���̂Ƃ�mojiretu�̓Y������i�Ƃ�moji�̓Y������k�Ƃ��� */
	k = j - 1;
	for (i = 0; mojiretu[i] != '\0'; i++)
	{
		j = k - i;
		*(moji + j) = mojiretu[i];
	}
	*(moji + i) = '\0';
}

int main()
{
	int suuji = 0;			/* ���� */
	char moji[13] = { 0 };	/* 13�����܂Ŋi�[�ł��镶���z�� */

	/* ���͏��� */
	printf("����(�ő�9��)����͂��Ă�������------->");	scanf("%d", &suuji);

	/* �ҏW�֐�(henshu)�����s���� */
	Henshu(suuji, moji);

	/* �ҏW���ꂽ������\������ */
	printf("�ҏW���ꂽ����------------------------>%s\n", moji);

	getchar();
	getchar();
	return 0;
}