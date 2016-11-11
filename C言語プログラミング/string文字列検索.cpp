
#include <stdio.h>
#include <string>

int main()
{
	std::string str("abcdefghjjk");
	std::string::size_type index = str.find("fgh");	// "fgh"‚ğŒŸõ
	if (index == std::string::npos)
	{
		printf("ŒŸõ‚É¸”s‚µ‚Ü‚µ‚½B\n");
	}
	else
	{
		printf("%s\n", str.substr(index).c_str());
	}

	getchar();
	return 0;
}