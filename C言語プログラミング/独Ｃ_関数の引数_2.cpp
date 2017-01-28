
/*
	次のプログラムはどこに問題がありますか？
	(監注：このプログラムは、問題がありますが、警告を出さないコンパイラもあるので注意してください。)
*/

#include <stdio.h>

void sqr_it(int);

int main()
{
	sqr_it(10.0);

	getchar();
	return 0;
}

void sqr_it(int num)
{
	printf("%d", num * num);
}

/*
	答え

	sqr_it()関数の引数で整数型を指定しているが、関数を呼び出す際に渡しているのは浮動小数点型である
*/