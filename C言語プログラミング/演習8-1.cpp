
/*
	���K8-1

	��̒lx��y�̍������߂�֐��`���}�N�����`����B
	diff(x, y);
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define diff(x, y) ((x) - (y))		// x��y�̍������߂�֐��`���}�N��

int main()
{
	int x;
	int y;

	printf("1�ڂ̐�������͂��Ă��������F");
	scanf("%d", &x);
	printf("2�ڂ̐�������͂��Ă��������F");
	scanf("%d", &y);
	printf("2�̐��̍���%d - %d = %d�ł��B\n",x, y, diff(x, y));

	getchar();
	getchar();
	return 0;
}