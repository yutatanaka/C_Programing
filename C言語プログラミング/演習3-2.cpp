
/*
	���K3-2

	List3-9�̍Ō��else���Aelse if(n < 0)�ɕύX����Ƃǂ��Ȃ邩����������E
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("��������͂��Ă��������F");
	scanf("%d", &no);

	if (no == 0)
	{
		puts("���̐���0�ł��B");
	}
	else if (no > 0)
	{
		puts("���̐��͐��ł��B");
	}
	else if (no < 0)
	{
		puts("���̐��͕��ł��B");
	}

	getchar();
	return 0;
}


/*

	<���،���>

	else if(no < 0)�ł��o�͌��ʂ͓����悤�ɂȂ�

*/