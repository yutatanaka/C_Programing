
/*
	üŒ`’Tõi’€Ÿ’Tõj
	ƒo—ÍŒ‹‰Ê„
	—á‚P
	vx[0] : 83
	vx[1] : 55
	vx[2] : 77
	vx[3] : 49
	vx[4] : 25
	’T‚·’lF49
	49‚Í4”Ô–Ú‚É‚ ‚è‚Ü‚·B
	—á‚Q
	vx[0] : 83
	vx[1] : 55
	vx[2] : 77
	vx[3] : 49
	vx[4] : 25
	’T‚·’lF16
	ô’Tõ‚É¸”s‚µ‚Ü‚µ‚½B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5	/* —v‘f” */
#define FAILED -1	/* ’Tõ¸”s */

/* ---—v‘f”‚‚Ì”z—ñv‚©‚çkey‚Æˆê’v‚·‚é—v‘f‚ğ’Tõ--- */
int Search(const int v[], int key, int n)
{
	int i = 0;

	while (1)
	{
		if (i == n)
			return FAILED;	/* ’Tõ¸”s */
		if (v[i] == key)
			return i;		/* ’Tõ¬Œ÷ */@
		i++;
	}
}

int main()
{
	int i, ky, idx;
	int array[NUMBER];

	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] : ", i);
		scanf("%d", &array[i]);
	}
	printf("’T‚·’lF");
	scanf("%d", &ky);

	idx = Search(array, ky, NUMBER);	/* —v‘f”NUMBER‚Ì”z—ñarray‚©‚çky‚ğ’Tõ */

	if (idx == FAILED)
	{
		puts("\a’Tõ‚É¸”s‚µ‚Ü‚µ‚½B");
	}
	else
	{
		printf("%d‚Í%d”Ô–Ú‚É‚ ‚è‚Ü‚·B", ky, idx + 1);
	}

	getchar();
	getchar();
	return 0;
}
