
/*
	�����T�̐����^�̔z��ϐ�a�ɁA���ׂĂ̐����ɂO����P�O�O�̗����̒l�������ĕ\�����A�ȉ��̏����𖞂������l��\������v���O����
	(1) �T�̐����̒l�́A�O���[�o���ϐ��ł͂Ȃ��z��ϐ��ɓ���邱��
	(2) �̔z��ւ̒l�̕\���A�l�̂Q�{�́A���ꂼ���p�̊֐���p���邱��
	(3) �̈����Ƃ��āA�����^�̃|�C���^��p���邱��
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100

/* �����Ŏ󂯎�����l���Q�{�ɂ��ĕԂ��֐� */
void TwiceTimes(int *a)
{
	printf("�Q�{�����l�F\n");
	for (int i = 0; i < 5; i++)
	{
		a[i] = a[i] * 2;
		printf("%3d ", a[i]);
	}
}

void ShowArray(int *a)
{
	printf("�������������F\n");
	/* �P����P�O�O�܂ł̗�����5�񔭐������� */
	for (int i = 0; i < 5; i++)
	{
		a[i] = rand() % MAX;
		printf("%3d ", a[i]);
	}
}

int main()
{
	int a[6];
	/* ���������� */
	srand((unsigned)time(NULL));				
	
	ShowArray(a);
	printf("\n");
	TwiceTimes(a);

	getchar();
	return 0;
}