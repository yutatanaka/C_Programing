
/*
	演習5-4

	List5-6を書きかえて、配列aの要素の並びを逆順にしたものをbにコピーするプログラムを作成せよ。
*/

#include <stdio.h>

int main()
{
	int i;
	int a[5] = { 17, 23, 36 };
	int b[5];

	for (i = 0; i < 5; i++)
		b[i] = a[4 - i];

	puts("  a    b ");
	puts("---------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);

	getchar();
	return 0;
}