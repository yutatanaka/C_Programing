
#include <stdio.h>
#include <string>

int main()
{
	std::string str1("�ɂق�");
	std::string str2("fghij");

	str1 += str2;	// str1�̖�����str2��A��
	printf("%s\n", str1.c_str());

	if (str1 == "abcdefghij")	// 2�̕�������r
	{
		printf("��v\n");
	}
	else
	{
		printf("�s��v\n");
	}

	printf("str1�̕�������%d", str1.length());

	getchar();
	return 0;
}