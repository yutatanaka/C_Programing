
/*
	演習8-3
	type型の二つの値を交換する、関数形式マクロを以下の形式で定義せよ。
		swap(type, a, b)
	たとえば、int型の変数x, yの値が5と10であるとき、swap(int, x, y)を呼び出した後は、
	xとyには10と5が格納されていなければならない
*/

#include <stdio.h>
#define swap(type, a, b) {	\
	type temp = (x);		\
	(x) = (y);				\
	(y) = temp;				\
}							

int main()
{
	int x = 5;
	int y = 10;

	swap(int, x, y);
	printf("二つの整数の値はx = %d, y = %d\n", x, y);

	getchar();
	return 0;
}