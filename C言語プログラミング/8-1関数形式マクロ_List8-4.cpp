
/*
	関数形式マクロとコンマ演算子
	警報を発しながら表示を行うマクロ
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define puts_alert(str)	(putchar('\a'), puts(str))

int main()
{
	int n;

	printf("整数を入力してください；");
	scanf("%d", &n);

	if (n)
		puts_alert("その数はゼロではありません。");
	else
		puts_alert("その数はゼロです。");

	return 0;
}