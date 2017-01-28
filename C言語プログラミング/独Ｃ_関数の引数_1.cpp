
/*
	outnum()という関数を使用するプログラムを作成してください。
	この関数は1つの整数型の引数を取り、その値を画面に表示するものとします
*/
#include <stdio.h>

void Outnum(int num)
{

	printf("%d", num);
}

int main()
{
	int num = 10;
	Outnum(num);

	getchar();
	return 0;
}