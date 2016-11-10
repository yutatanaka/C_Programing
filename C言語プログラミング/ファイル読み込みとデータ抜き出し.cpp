
#include <stdio.h>
#include <string>

int main()
{
	std::string str = "xxxxxx vertex=";
	str += "-100 0 -100";
	str += " 100 0 -100";
	str += " -100 0 100";
	str += " 100 0 100";

	int n = str.find("vertex=");

	// ここからデータ
	std::string str2 = str.substr(n + 7, str.length() - (n + 7));

	// とりあえず3つ分のデータを取り出す
	int d[3] = { 0, 0, 0 };
	int pos = str2.find(" ");
	std::string s = str2.substr(0, pos);

	d[0] = atoi(s.c_str());

	// 要らなくなった部分を削る
	for (int i = 0; i < 2; i++)
	{
		str2 = str2.substr(pos + 1, str2.length() - s.length());

		pos = str2.find(" ");
		s = str2.substr(0, pos);
		d[i] = atoi(s.c_str());

	}

	for (int k = 0; k < 2; k++)
	{
		printf("%d ", d[k+1]);
	}

	getchar();
	return 0;
}