
/*
	�R�����g�Ŏ����ꂽ�����P�ƂQ���A�K�؂ȏ����ɕς��ăv���O���������������Ȃ���
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* ���l�z�����p�|�C���^�ϐ� */
	int *array = NULL;
	int i;
	/* �P ����10�̔z��̐���(malloc���g�p) */
	array = (int *)malloc(sizeof(int *) *10);

	for (i = 0; i < 10; i++)
	{
		/* �l�̑�� */
		array[i] = i;			
	}
	/* �l�̕\�� */
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	/* �Q ���������������̉��(free()���g�p) */
	free(array);

	getchar();
	return 0;
}