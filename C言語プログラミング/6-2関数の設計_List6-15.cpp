
/*
	’€Ÿ’Tõ‚»‚Ì‚R
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5
#define FAILED -1

/* ---—v‘f”‚‚Ì”z—ñ‚–‚©‚çkey‚Æˆê’v‚·‚é—v‘f‚ğ’Tõ--- */
int Search(int v[], int key, int n)
{
	int i;

	v[n] = key;		/* ”Ô•º‚ğŠi”[ */

	for (i = 0; v[i] != key; i++)
	{
		;
	}
	return (i < n) ? i : FAILED;
}

int main()
{
	int i, ky, idx;
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++)
	{
		printf("vx[%d] :", i);
		scanf("%d", &vx[i]);
	}

	printf("’T‚·’lF");
	scanf("%d", &ky);

	if ((idx = Search(vx, ky, NUMBER)) == FAILED)
		puts("\a’Tõ‚É¸”s‚µ‚Ü‚µ‚½B");
	else
		printf("%d‚Í%d”Ô–Ú‚É‚ ‚è‚Ü‚·B\n", ky, idx + 1);

	getchar();
	getchar();
	return 0;
}