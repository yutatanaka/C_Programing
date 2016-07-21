
/*
	演習4-12

	正の整数値を読み込んで、その桁数を表示するプログラムを作成せよ。
	＊ヒント：List4-10のプログラムのwhike分の繰り返しの回数は、noの桁数と一致する。

	<出力結果>

	正の整数を入力してください：1963
	1963は4桁です。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;
	int cnt = 0;

	do{
		printf("正の整数を入力してください：");
		scanf("%d", &no);

		if (no <= 0)
		{
			printf("\a正でない数を入力しないでください。");
		}
	} while (no <= 0);

	printf("%dは", no);
	while (no > 0)
	{
		no /= 10;
		cnt++;
	}

	printf("%d桁です。", cnt);
	getchar();
	return 0;
}