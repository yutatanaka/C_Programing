
/*
	���K6-15

	�Ăяo���ꂽ�񐔂�\������֐�put_count���쐬����B
	(�E�Ɏ����̂́A�֐�put_count��3��Ăяo�������s���ʂł���B)
		void put_count() {    }
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

void put_count()
{
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%d���\n", i);
	}
}

int main()
{
	printf("�Ăяo���񐔂���͂��Ă��������F");
	scanf("%d", &n);

	put_count();
	
	getchar();
	getchar();
	return 0;
}