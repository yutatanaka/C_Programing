
/*
	�A�h���X�̉��Z�q
	�I�u�W�F�N�g�̃A�h���X��\������
*/

#include <stdio.h>

int main()
{
	int n;
	double x;
	int a[3];

	printf("n   �̃A�h���X�F%p\n", &n);
	printf("x   �̃A�h���X�F%p\n", &x);
	printf("a[0]�̃A�h���X�F%p\n", &a[0]);
	printf("a[1]�̃A�h���X�F%p\n", &a[1]);
	printf("a[2]�̃A�h���X�F%p\n", &a[2]);

	getchar();
	return 0;
}