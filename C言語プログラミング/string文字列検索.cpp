
#include <stdio.h>
#include <string>

int main()
{
	std::string str("abcdefghjjk");
	std::string::size_type index = str.find("fgh");	// "fgh"������
	if (index == std::string::npos)
	{
		printf("�����Ɏ��s���܂����B\n");
	}
	else
	{
		printf("%s\n", str.substr(index).c_str());
	}

	getchar();
	return 0;
}