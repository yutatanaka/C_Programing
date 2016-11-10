
#define _CRT_SECURE_NO_WARNINGS

/* header files */
#include <stdio.h>
#include <stdlib.h>
#include <string>


int main(int argc, char *argv[])
{
	FILE *fp;
	char *fileName = "plene.txt";
	long fileSize;


	/* ファイルのオープン */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		fprintf(stderr, "%sファイルが開けません\n", fileName);
		exit(EXIT_FAILURE);
	}

	fseek(fp, 0, SEEK_END);
	fileSize = ftell(fp);
	char *buffer = new char[fileSize];
	fseek(fp, 0, SEEK_SET);
	//printf("%sファイルのサイズ:%d バイト", fileName, fileSize);
	std::string strsum;

	while (fgets(buffer, fileSize, fp) != NULL)
	{
		std::string str = buffer;
		//printf("%s\n", buffer);
		int n = str.find("ver");
		if (n >= 0)
		{
			strsum = str.substr(n, 10);
			printf("%s\n", strsum.c_str() );
			getchar();
		}
		if (n >= 0)
		{
			strsum = str.substr(n, 12);
			printf("%s\n", strsum.c_str());
			getchar();
		}
		
		
		
		//getchar();

	}


	/* buffer変数をstringに変換 */
	//std::string str = buffer;
	//printf("%s\n", str);
	//auto a = str[0];
	//int n = str.find("vertex");
	//std::string str2 = str.substr(n, 6);
	//printf("ver = %d\n", n);
	//printf("%s\n", str2.c_str());
	
	/* ファイルのクローズ */
	fclose(fp);


	getchar();
	delete buffer;
	return 0;
}