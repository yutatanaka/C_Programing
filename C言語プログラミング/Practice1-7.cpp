
/*
	�l�����敪�A�P���A���ʂ���͂���B�l�����敪��
	�P�̂Ƃ��T������
	�Q�̂Ƃ�10%����
	�R�̂Ƃ�15%����
	����ȊO�͒l�����Ȃ�
	�Ƃ����z���Z�o���\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kubun = 0;
	int tanka = 0;
	int suryo = 0;
	int ritu = 0;
	int kingaku = 0;

	printf("�l�����敪�����:");	scanf("%d", &kubun);
	printf("�P������́F");			scanf("%d", &tanka);
	printf("���ʂ���́F");			scanf("%d", &suryo);

	switch (kubun)
	{
	case 1:
		ritu = 5;
		break;
	case 2:
		ritu = 10;
		break;
	case 3:
		ritu = 15;
		break;
	default:
		ritu = 0;
		break;
	}
	/* ���z���Z�o */
	kingaku = tanka * suryo * (100 - ritu) / 100;

	printf("�l������%d ���z��%d\n", ritu, kingaku);

	getchar();
	getchar();
	return 0;
}