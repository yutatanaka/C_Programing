
/*
	�P���A���ʂ���͂��A���z�Ə���ō��݋��z���v�Z���\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tanka = 0;
	int suryo = 0;
	int kingaku = 0, zeikomi = 0;

	printf("�P����");	scanf("%d", &tanka);
	printf("���ʁ�");	scanf("%d", &suryo);

	kingaku = tanka * suryo;	/* �P���~���� */
	zeikomi = kingaku * 105 / 100;

	printf("���z��%d �ō����z��%d", kingaku, zeikomi);

	getchar();
	getchar();
	return 0;
}