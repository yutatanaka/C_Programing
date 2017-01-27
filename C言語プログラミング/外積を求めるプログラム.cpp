
/*
	�O�ς����߂�v���O�����̃e�X�g
*/

#include <stdio.h>
#include <math.h>

typedef struct
{
	double a[3] = {1.0, 2.0, 0.0};		/* �g���C�A���O�����X�g1�� */
	double b[3] = {0.0, 1.0, -1.0};		/* �g���C�A���O�����X�g2�� */
	double c[3] = { 0 };
	
}Vector;
Vector vec;

/* �O�ς����߂�֐� */
void Acrossb(double a[], double b[], double c[])
{
	c[0] = a[1] * b[2] - a[2] * b[1];
	c[1] = a[2] * b[0] - a[0] * b[2];
	c[2] = a[0] * b[1] - a[1] * b[0];
}

/* ���K�����s���֐� */
void Normalize(double c[])
{
	double len = sqrt(c[0] * c[0] + c[1] * c[1] + c[2] * c[2]);

	len = 1.0 / len;
	c[0] *= len;
	c[1] *= len;
	c[2] *= len;
}

int main()
{
	Acrossb(vec.a, vec.b, vec.c);
	printf("(%f %f %f)\n", vec.c[0], vec.c[1], vec.c[2]);
	Normalize(vec.c);
	printf("(%f %f %f)\n", vec.c[0], vec.c[1], vec.c[2]);

	getchar();
	return 0;
}