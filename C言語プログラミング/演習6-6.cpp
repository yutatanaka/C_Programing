
/*
	‰‰K6-6

	Œx•ñ‚ğn‰ñ˜A‘±‚µ‚Ä”­‚·‚éŠÖ”‚ğì¬‚¹‚æB
		void alert(int n) {    }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void alert(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		putchar('\a');
	}
}

int main()
{
	int num;
	printf("‰½‰ñŒx•ñ‚ğ–Â‚ç‚µ‚Ü‚·‚©H:");
	scanf("%d", &num);

	alert(num);

	getchar();
	getchar();
	return 0;
}