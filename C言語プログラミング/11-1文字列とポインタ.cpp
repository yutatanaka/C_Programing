
#include <stdio.h>

int main()
{
	char str[] = { "ABC" };	/* �z��ɂ�镶���� */
	char *ptr = "123";		/* �|�C���^�ɂ�镶���� */

	printf("str = %s\n", str);
	printf("ptr = %s\n", ptr);

	getchar();
	return 0;
}