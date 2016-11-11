
/*
	string基本操作
*/

#include <stdio.h>
#include <string>

int main()
{
	std::string str1;				// 空のstring
	std::string str2("abcde");		// 初期値として"abcde"

	printf("str1 = %s\n", str1.c_str());
	printf("str2 = %s\n", str2.c_str());

	str1 = str2;	// str2の内容をstr１に代入
	printf("str1 = %s", str1.c_str());


	getchar();
	return 0;
}