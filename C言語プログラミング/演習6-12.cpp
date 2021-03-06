
/*
	K6-12

	4s3ñÌsñaÆ3s4ñbÌÏðA3s3ñÌsñÉi[·éÖðì¬¹æB
		void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]) {     }
*/

#include <stdio.h>

/* 4s3ñÌsñaÆ3s4ñbÌÏð3s3ñÌsñcÉi[·é */
void mat_mul(const int a[4][3], const int b[3][4], int c[3][3])
{
	int i, j;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] += a[i][j] * b[j][i];
		}
	}
}

int main()
{
	int i, j;
	int ma[4][3] = { { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 } };
	int mb[3][4] = { { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 } };
	int mc[3][3] = { 0 };

	mat_mul(ma, mb, mc);
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d\n", mc[i][j]);
		}
		putchar('\n');
	}

	getchar();
	getchar();
	return 0;
}