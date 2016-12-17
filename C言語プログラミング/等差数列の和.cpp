
/*  
	“™·”—ñ‚Ì˜a‚ğŒvZ‚·‚é
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0; 
	int i, n;

	printf("“™·”—ñ‚ÌãŒÀF");	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	printf("1+2+3+....+%d = %d\n", n, sum);

	getchar();
	getchar();
	return 0;
}