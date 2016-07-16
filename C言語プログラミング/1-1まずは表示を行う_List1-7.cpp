
/*
	拡張表記　< \a >

	挨拶して警告を3回発する
*/

#include <stdio.h>

int main()
{
	printf("こんにちは。\a\a\a\n");		/* 表示とともに警告を3回発する */

	getchar();
	return 0;
}