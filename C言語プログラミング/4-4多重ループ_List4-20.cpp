
/*
	多重ループ

	読み込んだ整数の個数だけ*を連続表示	(好きなだけ繰り返す)

	<出力結果>

	正の整数を入力してください：-5
	♪正でない数を入力しないでください。
	正の整数を入力してください：17
	*****************
	もう一度？【Yes…0 / No…9】 :0
	正の整数を入力してください：5
	*****
	もう一度？【Yes…0 / No…9】 :9
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int retry;

	do{
		int i, no;

		do{
			printf("正の整数を入力してください：");
			scanf("%d", &no);
			if (no <= 0)
				puts("\a正でない数を入力しないでください。");
		} while (no <= 0);

		for (i = 1; i <= no; i++)
			putchar('*');
		putchar('\n');

		printf("もう一度？【Yes…0 / No…9】 :");
		scanf("%d", &retry);
	} while (retry == 0);

	getchar();
	getchar();
	return 0;
}