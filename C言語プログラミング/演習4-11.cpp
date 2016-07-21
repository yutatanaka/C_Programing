
/*  
	演習4-11

	List4-10のプログラムを、結果の出力時に読み込んだ値も表示するように書き換えよ。

	＜出力結果＞

	正の整数を入力してください。
	1963を逆から読むと3691です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	do{
		printf("正の整数を入力してください:");
		scanf("%d", &no);
		if (no <= 0)
		{
			puts("\a正でない数を入力しないでください。");
		}

	} while (no <= 0);


	printf("%dを逆から読むと", no);
	while (no > 0)
	{
		printf("%d", no % 10);
		no /= 10;
	}
	puts("です。");

	getchar();
	return 0;
}