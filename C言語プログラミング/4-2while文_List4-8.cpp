
/*
	ˆê’è‰ñ”‚ÌŒJ•Ô‚µ

	“Ç‚İ‚ñ‚¾®”‚Ì‰ñ”‚¾‚¯–‚ğ˜A‘±•\¦
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("³‚Ì®”F");
	scanf("%d", &no);

	while (no-- > 0)
		putchar('*');
	putchar('\n');

	getchar();
	return 0;
}