
/* 
	�敪�Ɛl������͂���B�敪��1(�q��)�̂Ƃ��͗�����800�~�A2(��l)�̂Ƃ���
	1500�~�Ƃ��A����ɐl�����|���ė������v�����ߕ\������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kubun = 0;
	int ninzu = 0;
	int goukei = 0;


	while (1)
	{
		printf("�P�F�q���A�Q�F��l�@�ǂ��炩��I��ł��������F");	scanf("%d", &kubun);
		printf("�l������͂��Ă��������F");	scanf("%d", &ninzu);
		if (kubun == 1)
		{
			goukei = ninzu * 800;
			break;
		}
		else if (kubun == 2)
		{
			goukei = ninzu * 1500;
			break;
		}
		else
		{
			printf("�Ԉ����������I��ł��܂��B������x�I��ł��������B\n");
			continue;
		}
	}

	printf("�������v��%d", goukei);

	getchar();
	return 0;
}