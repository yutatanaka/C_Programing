
/*
	文字型

	単なるchar型が符号付き型か符号無し型かを判定
*/

#include <stdio.h>
#include <limits.h>

int main()
{
	printf("この処理系のchar型は");

	if (CHAR_MIN)
		puts("符号付きの型です。");
	else
		puts("符号無しの型です。"); 

	getchar();
	return 0;
}