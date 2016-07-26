
/*
	’€Ÿ’Tõ
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5	/* —v‘f” */
#define FAILED -1	/* ’Tõ¸”s */

/* ---—v‘f”‚‚Ì”z—ñ‚©‚çkey‚Æˆê’v‚·‚é—v‘f‚ğ’Tõ‚·‚é--- */
int Search(int v[], int key, int n)
{
	int i = 0;

	v[n] = key;		/* ”Ô•º‚ğŠi”[ */

	while (1)
	{
		if (v[i] == key)
		{
			break;	/* ’Tõ¬Œ÷ */
		}
		i++;
	}
	return (i < n) ? i : FAILED;
}

int main()
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++)
	{
		printf("vx[%d] :", i);
		scanf("%d", &vx[i]);
	}
	printf("’T‚·’lF");
	scanf("%d", &ky);

	if ((idx = Search(vx, ky, NUMBER)) == FAILED)
	{
		puts("\a’Tõ‚É¸”s‚µ‚Ü‚µ‚½B");
	}
	else
	{
		printf("%d‚Í%d”Ô–Ú‚Ì‚ ‚è‚Ü‚·B\n", ky, idx + 1);
	}

	getchar();
	getchar();
	return 0;
}