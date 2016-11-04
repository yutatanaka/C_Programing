
/*
	“ñ‚Â‚Ì®”‚Ì˜a‚Æ·‚ğ‹‚ß‚é(ŠÔˆá‚¢)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* n1‚Æn2‚Ì˜a‚Æ·‚ğsum‚Ædiff‚ÉŠi”[(ŠÔˆá‚¢) */
void sum_diff(int n1, int n2, int sum, int diff)
{
	sum = n1 + n2;									/* ˜a */
	diff = (n1 > n2) ? n1 - n2 : n2 - n1;			/* · */
}

int main()
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”AF");	scanf("%d", &na);
	printf("®”BF");	scanf("%d", &nb);

	sum_diff(na, nb, wa, sa);
	
	printf("˜a‚Í%d‚Å·‚Í%d‚Å‚·B\n", wa, sa);

	getchar();
	return 0;
}