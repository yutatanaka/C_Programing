
/*
	料金区分と人数を入力する。料金区分が
	１のとき料金を８００円
	２のとき１０００円
	３のとき１５００円
	とし、それに人数を掛けて、金額を算出する。料金と金額を表示する。
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
		printf("料金区分を入力してください：");	scanf("%d", &kubun);
		printf("人数を入力してください：");		scanf("%d", &ninzu);

		switch (kubun)
		{
		case 1:
			ryokin = 800;
		
			break;
		case 2:
			ryokin = 1000;
	
			break;
		case 3:
			ryokin = 1500;
		
			break;
		default:
			printf("もう一度入力してください\n");
			continue;
		}
	}
	kingaku = ninzu * ryokin;
	printf("金額＝%d 料金＝%d", kingaku, ryokin);
	
	getchar();
	getchar();
	return 0;
}