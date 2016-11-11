
#include <stdio.h>
#include <string>

int main()
{
	std::string str("abcdefghijk");
	//str = str.substr(5);	// "fghijk"
	str = str.substr(5, 3);	// "fgh"
	printf("%s\n", str.c_str());
	
	getchar();
	return 0;
}