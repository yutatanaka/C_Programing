
/*  
	�ҏW(Henshu)�֐��̃\�[�X�t�@�C��
*/

/* �����𕶎��ɕҏW���� */
void Henshu(int suuji, char *moji)
{
	int i, j, k;
	int suuji0 = 0, suuji1 = 0;				/* ����0�A�����P */
	char suuji_t[] = "0123456789";			/* �����e�[�u�� */
	char mojiretu[13] = { 0 };				/* ������e�[�u�� */

	/* �@0����(�}�C�i�X)�Ȃ�v���X�ɂ��Đ���0(suuji0)�Ɋi�[���� */
	if (suuji < 0)
	{
		suuji0 = 0 - suuji;
	}
	/* �A0�ȏ�Ȃ炻�̂܂ܐ����O(suuji0)�� */
	else
	{
		suuji0 = suuji;
	}

	/* �B�J�E���^i��13�����ŁA�����O(suuji0)��0�łȂ��Ԃ́A���̇C�`�E���J��Ԃ� */
	for (i = 0, j = 0; i < 13 && suuji0 != 0; i++, j++)
	{
		/* �C����0��10�Ŋ���A���𐔎�0(suuji0)�ցA�]��𐔎�1(suuji1)�֊i�[���� */
		suuji1 = suuji0 % 10;
		suuji0 = suuji0 / 10;

		/* ����1(suuji1)�𕶎��ɕϊ���������(mojiretu)�֊i�[���� */
		mojiretu[j] = suuji_t[suuji1];

		/* ����0(suuji0)��0�łȂ��Ƃ��́A�R�����Ɓu(i + 1) % 3 == 0�v�ɓY����j��+�P���A�J���}�𕶎���֊i�[���� */
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

	/* ������̍Ō��'\0'���i�[���� */
	mojiretu[j] = '\0';

	/* ������(mojiretu)���ŏI���ʂ̕���(moji)�ɕϊ�����
	���̂Ƃ�mojiretu�̓Y������i�Ƃ�moji�̓Y������k�Ƃ���*/
	k = j - 1;
	for (i = 0; mojiretu[i] != '\0'; i++)
	{
		j = k - i;
		*(moji + j) = mojiretu[i];
	}
	*(moji + i) = '\0';
}