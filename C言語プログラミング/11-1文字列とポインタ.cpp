
#include <stdio.h>

int main()
{
	char str[] = { "ABC" };	/* 配列による文字列 */
	char *ptr = "123";		/* ポインタによる文字列 */

	printf("str = %s\n", str);
	printf("ptr = %s\n", ptr);

	getchar();
	return 0;
}