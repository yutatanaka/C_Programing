
/*
	���K4-15

	�E�Ɏ����悤�ɁA�g���ƕW���̏d�̑Ή��\��\������v���O�������쐬����B
	�Ȃ��\������g���͈̔�(�J�n�l�A�I���l�A����)�͐����l�Ƃ��ēǂݍ���ŁA
	�W���̏d�͏�������2���\�����邱��

	��cm����F155
	��cm�܂ŁF190
	��cm���ƁF5
	155cm  49.50kg
	160cm  54.00kg
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int n, min, max;

	printf("��cm����F");   scanf("%d", &min);
	printf("��cm�܂ŁF");   scanf("%d", &max);
	printf("��cm���ƁF");   scanf("%d", &n);


	for (i = min; i < max; i += n)
	{
		min += n;
		printf("%dcm  %.2f\n", min, (min  - 100) * 0.9);
	}

	getchar();
	getchar();
	return 0;
}