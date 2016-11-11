
#include <stdio.h>
#include <string>

int main()
{
	std::string str1("にほんご");
	std::string str2("fghij");

	str1 += str2;	// str1の末尾にstr2を連結
	printf("%s\n", str1.c_str());

	if (str1 == "abcdefghij")	// 2つの文字列を比較
	{
		printf("一致\n");
	}
	else
	{
		printf("不一致\n");
	}

	printf("str1の文字数は%d", str1.length());

	getchar();
	return 0;
}