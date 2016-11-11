
/*
	stringŠî–{‘€ì
*/

#include <stdio.h>
#include <string>

int main()
{
	std::string str1;				// ‹ó‚Ìstring
	std::string str2("abcde");		// ‰Šú’l‚Æ‚µ‚Ä"abcde"

	printf("str1 = %s\n", str1.c_str());
	printf("str2 = %s\n", str2.c_str());

	str1 = str2;	// str2‚Ì“à—e‚ğstr‚P‚É‘ã“ü
	printf("str1 = %s", str1.c_str());


	getchar();
	return 0;
}