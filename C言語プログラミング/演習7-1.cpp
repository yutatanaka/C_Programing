
/*
	���K7-1

	�ȉ��Ɏ����e���̒l��\������v���O�������쐬����ƂƂ��Ɋe���̒l���������B

	sizeof 1	sizeof(unsigned)-1		sizeof n+2
	sizeof+1	sizeof(double)-1		sizeof(n+2)
	sizeof-1	sizeof((double)-1)		sizeof(n+2.0)
*/

#include <stdio.h>

int main()
{
	int n;

	printf("%u %u %u\n", sizeof 1, sizeof(unsigned)-1, sizeof n+2);
	printf("%u %u %u\n", sizeof + 1, sizeof(double) - 1, sizeof(n + 2));
	printf("%u %u %u\n", sizeof - 1, sizeof((double)-1), sizeof(n + 2.0));


	getchar();
	return 0;
}