
/*
	}`Ì`æ

	¶ºª¼pÌ¼pñÓOp`ð\¦

	<oÍÊ>
	¶º¼pñÓOp`ðìèÜ·B
	ZÓF5
	*
	**
	***
	****
	*****
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, len;

	puts("¶º¼pñÓOp`ðìèÜ·B");
	printf("ZÓF");
	scanf("%d", &len);

	for (i = 1; i <= len; i++)					/* is(i = 1, 2, ¥¥¥ , len) */
	{
		for (j = 1; j <= i; j++)				/* esÉiÂ'*'ð\¦ */
		{
			putchar('*');						
		}
		putchar('\n');							/* üs */
	}

	getchar();
	getchar();
	return 0;
}