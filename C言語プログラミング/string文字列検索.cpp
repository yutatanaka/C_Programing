
#include <stdio.h>
#include <string>

int main()
{
	std::string str("abcdefghjjk");
	std::string::size_type index = str.find("fgh");	// "fgh"を検索
	if (index == std::string::npos)
	{
		printf("検索に失敗しました。\n");
	}
	else
	{
		printf("%s\n", str.substr(index).c_str());
	}

	getchar();
	return 0;
}