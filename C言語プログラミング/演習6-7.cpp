
/*
	演習6-7

	画面に｢こんにちは。｣と表示する関数を作成せよ。
		void hello(void) {     }
*/

#include <stdio.h>

void hello()
{
	printf("こんにちは。\n");
}

int main()
{
	hello();

	getchar();
	return 0;
}