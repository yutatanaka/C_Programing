
/* 
	社員マスタファイルを読み込み一覧を表示する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;		/* ファイルポインタ宣言 */
	int kensu = 1;	/* 件数 */
	char buff[512] = {0};

	printf("         <<<  社員マスター一覧  >>>\n");
	printf("\n");
	printf("        番号 氏　名          基本給\n");

	/* ファイル"shain_m.txt"を入力モード"ｒ"でオープンする */
	if ((fp = fopen("shain_m.txt", "r")) == NULL)
	{
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}
	
	/* データがなくなるまでカウンタとデータ内容を表示する */
	while (fgets(buff, sizeof(buff), fp) != NULL)		/* 読み込み */
	{
		printf("  %4d  ", kensu);						/* 件数表示 */
		puts(buff);										/* データ表示 */
		kensu++;										/* 件数＋１ */
	}

	getchar();
	getchar();
	return 0;
}