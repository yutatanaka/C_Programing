
/*  
	R047�̖��Ńe�[�u��(�z��)�̎Q�Ƃ��|�C���^���g�p�����v���O�����ɕύX���Ȃ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* �ϐ��錾 */
	int i, j, k, mojisu;				/* ��΂������� */
	char in_mojiretu[81] = { 0 };		/* ���͂��镶���� */
	char out_mojiretu[81] = { 0 };		/* �o�͂��镶���� */
	char mojiretu[] = { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0" };

	/* �|�C���^�̐錾 */
	char *p_in, *p_out;
	char *p_moji;

	printf("------------------�p���̈Í���------------------\n");
	printf("�p������͂��Ă��������B\n");					fgets(in_mojiretu, 81, stdin);
	printf("�X���C�h���镶��������͂��Ă��������|�|�|>");	scanf("%d", &mojisu);

	/* �A�h���X���Z�b�g */
	p_in = in_mojiretu;
	p_out = out_mojiretu;
	p_moji = mojiretu;

	/* for���Ŕ���ƌ��� */
	for (i = 0; *(p_in + i) != '\0'; i++)
	{
		*(p_out + i) = *(p_in + i);
		for (j = 0; j < 52; j++)
		{
			if (*(p_in + i) == *(p_moji + j))
			{
				k = j + mojisu;
				if (k >= 52)
				{
					k -= 52;
				}
				*(p_out + i) = *(p_moji + k);
			}
		}
	}

	printf("----------------�Í�����̕�����----------------\n");
	printf("\n");
	printf("%s\n", out_mojiretu);
	printf("\n");
	printf("------------------------------------------------\n");
	getchar();
	getchar();
	return 0;
}