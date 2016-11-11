
#include <stdio.h>
#include <string>

int main()
{
	std::string str1("‚É‚Ù‚ñ‚²");
	std::string str2("fghij");

	str1 += str2;	// str1‚Ì––”ö‚Éstr2‚ğ˜AŒ‹
	printf("%s\n", str1.c_str());

	if (str1 == "abcdefghij")	// 2‚Â‚Ì•¶š—ñ‚ğ”äŠr
	{
		printf("ˆê’v\n");
	}
	else
	{
		printf("•sˆê’v\n");
	}

	printf("str1‚Ì•¶š”‚Í%d", str1.length());

	getchar();
	return 0;
}