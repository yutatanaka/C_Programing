
/*  
	“™·”—ñ‚Ì˜a‚ğŒvZ‚·‚é
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m;		// ‰€
	int n;		// Œö·

	scanf("%d %d", &m, &n);

	if (m >= 1 && m <= 100 && n >= 1 && n <= 100)
	{
		for (int i = 1; i <= 10; i++)
		{
			if (i == 10)
			{
				printf("%d \n", m);
			}
			else
			{
				printf("%d ", m);
			}
				m += n;
			
		}
	}

	getchar();
	getchar();
	return 0;
}