
/*
	—¿‹à‹æ•ª‚Æl”‚ğ“ü—Í‚·‚éB—¿‹à‹æ•ª‚ª
	‚P‚Ì‚Æ‚«—¿‹à‚ğ‚W‚O‚O‰~
	‚Q‚Ì‚Æ‚«‚P‚O‚O‚O‰~
	‚R‚Ì‚Æ‚«‚P‚T‚O‚O‰~
	‚Æ‚µA‚»‚ê‚Él”‚ğŠ|‚¯‚ÄA‹àŠz‚ğZo‚·‚éB—¿‹à‚Æ‹àŠz‚ğ•\¦‚·‚éB
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
		printf("—¿‹à‹æ•ª‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");	scanf("%d", &kubun);
		printf("l”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");		scanf("%d", &ninzu);

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
			printf("‚à‚¤ˆê“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
			continue;
		}
	}
	kingaku = ninzu * ryokin;
	printf("‹àŠz%d —¿‹à%d", kingaku, ryokin);
	
	getchar();
	getchar();
	return 0;
}