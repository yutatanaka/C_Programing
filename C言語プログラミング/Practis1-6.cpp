
/*
	�����敪�Ɛl������͂���B�����敪��
	�P�̂Ƃ��������W�O�O�~
	�Q�̂Ƃ��P�O�O�O�~
	�R�̂Ƃ��P�T�O�O�~
	�Ƃ��A����ɐl�����|���āA���z���Z�o����B�����Ƌ��z��\������B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kubun = 0;
	int ninzu = 0;
	int ryokin = 0;
	int kingaku = 0;

	while (1)
	{
		printf("�����敪����͂��Ă��������F");	scanf("%d", &kubun);
		printf("�l������͂��Ă��������F");		scanf("%d", &ninzu);

		switch (kubun)
		{
		case 1:
			ryokin = 800;
			kingaku = ninzu * ryokin;
			printf("���z��%d ������%d", kingaku, ryokin);
			break;
		case 2:
			ryokin = 1000;
			kingaku = ninzu * ryokin;
			printf("���z��%d ������%d", kingaku, ryokin);
			break;
		case 3:
			ryokin = 1500;
			kingaku = ninzu * ryokin;
			printf("���z��%d ������%d", kingaku, ryokin);
			break;
		default:
			printf("������x���͂��Ă�������\n");
			continue;
		}
	}
	
	getchar();
	getchar();
	return 0;
}