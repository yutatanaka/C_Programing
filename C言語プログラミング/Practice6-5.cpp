
/*  
	Practice6-4��main�֐������݂̂��R�s�[��Practice6-5�Ƃ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �֐��̃v���g�^�C�v�錾 */
void Henshu(int, char *);

int main()
{
	int suuji = 0;			/* ����(���͗p) */
	char moji[13] = { 0 };	/* �����i�[�p�z�� */

	/* ���͏��� */
	printf("����(�ő�X��)����͂��Ă�������------->");	scanf("%d", &suuji);
	
	/* Henshu�֐������s */
	Henshu(suuji, moji);

	/* �\������ */
	printf("�ҏW���ꂽ����------------------------>%s\n", moji);	

	getchar();
	return 0;
}