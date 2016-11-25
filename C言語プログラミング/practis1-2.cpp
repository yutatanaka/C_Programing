
/*
	’P‰¿A”—Ê‚ğ“ü—Í‚µA‹àŠz‚ÆÁ”ïÅ‚İ‹àŠz‚ğŒvZ‚µ•\¦‚·‚éB
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tanka = 0;
	int suryo = 0;
	int kingaku = 0, zeikomi = 0;

	printf("’P‰¿");	scanf("%d", &tanka);
	printf("”—Ê");	scanf("%d", &suryo);

	kingaku = tanka * suryo;	/* ’P‰¿~”—Ê */
	zeikomi = kingaku * 105 / 100;

	printf("‹àŠz%d Å‹àŠz%d", kingaku, zeikomi);

	getchar();
	getchar();
	return 0;
}