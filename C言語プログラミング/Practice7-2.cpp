
/*  
	顧客マスタファイルの読みこみ一覧を表示する(R063を参考にして作成する)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "henshu.h"

/* 顧客レコード(構造体の宣言) */
typedef struct
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec;

/* 見出しとタイトルを表示する関数 */
void Midasi()
{
	printf("          <<<  顧客マスタ一覧　>>>\n\n");
	printf("          番号 顧客名　　　　　  売掛残高\n");
}

int main()
{
	int no = 0;
	char zandakax[11];
	FILE *fp;
	char *fileName = "kokyaku_m.txt";
	
	/* 見出しとタイトルを表示する */
	Midasi();
	
	/* ファイル"kokyaku_m.txt"を入力モード"r"でオープンする */
	/* ファイルがNULLであればエラー処理 */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}

	/* データがなくなるまでカウンタとデータ内容を表示する */
	no = 1;
	while (fscanf(fp, "%d %s %d", &krec.bango, krec.namae, &krec.zandaka) != EOF)
	{
		/* 左端に件数（カウンタ）を表示する */
		printf("   %4d   ", no);
		/* カンマ挿入 */
		Henshu(krec.zandaka, zandakax);
		printf("%04d %-15s %11s\n", krec.bango, krec.namae, zandakax);
		no++;
	}
	printf("      確認したら何かキーを押してください。\n");
	
	getchar();
	getchar();
	return 0;
}