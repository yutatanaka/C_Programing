
/*
	string��{����
*/

#include <stdio.h>
#include <string>

int main()
{
	std::string str1;				// ���string
	std::string str2("abcde");		// �����l�Ƃ���"abcde"

	printf("str1 = %s\n", str1.c_str());
	printf("str2 = %s\n", str2.c_str());

	str1 = str2;	// str2�̓��e��str�P�ɑ��
	printf("str1 = %s", str1.c_str());


	getchar();
	return 0;
}