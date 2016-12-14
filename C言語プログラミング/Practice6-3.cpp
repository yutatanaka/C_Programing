
/*
	社員マスタファイルを読み込み一覧を表示する
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 1, bango = 0, kihonkyu = 0;		/* 件数、番号、基本給 */
	char simei[20] = { 0 };						/* 氏名 */
	FILE *fp;									/* ファイルポインタの宣言 */

	/* 見出しとタイトルを表示する */
	printf("           <<<　社員マスタ一覧　>>>\n");
	printf("           番号 氏名　　　　　基本給\n");

	/* ファイルが見つからなかった場合 */
	if ((fp = fopen("shain_m.txt", "r")) == NULL)
	{
		/* エラー表示して終了させる */
		printf("File Open Error!!\n");
		exit(EXIT_FAILURE);
	}

	/* データがなくなるまでカウンタとデータ内容を表示する */
	while (fscanf(fp, "%d %s %d", &bango, simei, &kihonkyu) != EOF)	/* 読込 */
	{
		printf("    %4d  ", kensu);									/* 件数表示 */
		printf("%04d %-15s %8d\n", bango, simei, kihonkyu);			/* データ表示 */
		kensu++;
	}

	fclose(fp);

	printf("\x1b[31m");
	printf("\n     確認したら何かキーを押してください。\n");

	getchar();
	getchar();
	return 0;
}