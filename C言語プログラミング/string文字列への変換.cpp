
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

int main()
{
	std::string fileName("test.txt");

	FILE* fp = fopen(fileName.c_str(), "r");


	fclose(fp);

	getchar();
	return 0;
}