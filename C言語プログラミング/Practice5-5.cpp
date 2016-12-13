
/*  
	�L�[�{�[�h����c�A���̒�������͂��A���͂������l�̃`�F�b�N(1�`100�Ȃ�OK)���s���B
	�ʐς̌v�Z���s���A�\������B���͂ɂ�input()�֐�
	�`�F�b�N�ɂ�check()�֐��A�ʐς̌v�Z�ɂ�keisan()�֐��𗘗p����B���l�͂��ׂĐ����^�Ƃ���B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �}�N�� */
#define MIN 1
#define MAX 100

/* �֐��̃v���g�^�C�v�錾 */
int Input(char *s);
int Check(int);
int Keisan(int, int);

int main()
{
	int tate = 0, yoko = 0, menseki = 0;			/* �c�A���A�ʐ� */

	/* ���b�Z�[�W�̐錾(�\���ɂ͎���msg1����msg5���g�p���邱��) */
	char msg1[] = "-------�����`�̖ʐς����߂�֐�-------";
	char msg2[] = "�c�̒�������͂��Ă�������--->";
	char msg3[] = "���̒�������͂��Ă�������--->";
	char msg4[] = "�����`�̖ʐ�----------------->";
	char msg5[] = "--------------------------------------";

	/* msg1�̕\�� */
	printf("%s\n", msg1);

	/* ���͗p�֐�(Input)��msg2��n��(�����Ƃ�)�A�߂�l�Ƃ��ďc�̒���(tate)�󂯎�� */
	tate = Input(msg2);

	/* ���͗p�֐���msg3��n���A�߂�l�Ƃ��ĉ��̒���(yoko)���󂯎�� */
	yoko = Input(msg3);

	/* �v�Z�p�֐�(keisan)�ɏc�̒����A���̒�����n���A�ʐ�(menseki)���󂯎�� */
	menseki = Keisan(tate, yoko);

	/* msg4�Ɩʐς�\������ */
	printf("%s%d\n", msg4, menseki);

	/* msg5��\������ */
	printf("%s\n", msg5);

	getchar();
	getchar();
	return 0;
}

/* ���͗p�֐� */
int Input(char *s)
{
	/* �����A���� */
	int nagasa = 0, kekka = 0; 

	do
	{
		/* ��������� */
		printf("%s", s);	scanf("%d", &nagasa);

		/* �`�F�b�N�p�֐��ɒ�����n���A����(kekka)���󂯎�� */
		kekka = Check(nagasa);

		/* ���ʂ�0�łȂ��Ƃ���"Error 1�`100�͈̔͂ł͂���܂���B"�̕\�����s���A�@����B���J��Ԃ�(do while�g�p) */
		if (kekka != 0)
		{
			printf("Error 1�`100�͈̔͂ł͂���܂���B\n");
		}

	} while (kekka != 0);

	return nagasa;
}

/* �`�F�b�N�p�֐� */
int Check(int x)
{
	/* x��MIN�ȏ��MAX�ȉ��̎�0��߂�l�Ƃ��� */
	if (x > MIN && x < MAX)
	{
		return 0;
	}
	/* �����łȂ��Ƃ���1��߂�l�Ƃ��� */
	else
	{
		return 1;
	}
}

/* �ʐόv�Z�p�֐� */
int Keisan(int x, int y)
{
	/* x �~ y ��߂�l�Ƃ��� */
	return x * y;
}
