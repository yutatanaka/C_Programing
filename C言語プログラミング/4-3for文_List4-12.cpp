
/*
	for•¶‚É‚æ‚éˆê’è‰ñ”‚ÌŒJ•Ô‚µ

	“Ç‚Ýž‚ñ‚¾®”‚ÌŒÂ”‚¾‚¯–‚ð˜A‘±•\Ž¦(for•¶)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, no;

	printf("³‚Ì®”F");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
	{
		putchar('*');
	}
	putchar('\n');

	getchar();
	return 0;
}