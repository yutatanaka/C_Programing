
/*
	次のメッセージを表示するプログラムを作成してください。
	ただし、プログラムを少なくとも２つの関数で構成してください。
*/

#include <stdio.h>

void func1();				/* プロトタイプ */
void func2();					
void func3();

int main()
{
	func1();

	getchar();
	return 0;
}

void func1()
{
	printf("夏草や　");
	func2();
}

void func2()
{
	printf("つはものどもが　");
	func3();
}

void func3()
{
	printf("夢の跡");
}