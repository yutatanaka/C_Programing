
/* 
	社員マスタファイルを読み込み、一旦テーブルに格納し、テーブルから一覧を表示する
	10件表示したら確認メッセージを表示し、判定を入力する。
	1が入力されたら前の10件
	2が入力されたら次の10件を表示する。
	9が入力されたら処理を終了する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "henshu.h"

int main()
{
	/* 変数 */
	int bango = 0, kihonkyu = 0;		/* 番号、基本給 */
	int max_no = 0, no = 0, lno = 0;	/* 最大件数、カウンタ */
	int start_no = 0, end_no = 0;		/* 開始番号、終了番号 */
	int hantei = 0;						/* 判定 */
	char simei[10] = { 0 };				/* 氏名 */
	char kihonkyux[10] = { 0 };			/* 基本給→編集後格納用 */

	/* 各種テーブル */
	int bango_t[50] = { 0 };			/* 番号テーブル */
	char simei_t[10][50] = { 0 };		/* 氏名テーブル */
	int kihonkyu_t[50] = { 0 };			/* 基本給テーブル */
	
	/* ファイル関係 */
	FILE *fp;							/* ファイルポインタの宣言 */
	char *fileName = "shain_m2.txt";	/* ファイル名 */

	/* 入力ファイルは社員マスタ２"shain_m2.txt"とし、入力モードでオープンする */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		/* エラー処理 */
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}

	/* EOFになるまでファイルを読み込み、番号は番号テーブルへ
	氏名は氏名テーブルへ、基本給は基本給テーブルへそれぞれ格納する。添え字およびカウンタをnoとする
	*/
	while (fscanf(fp, "%d %s %d", &bango, simei, &kihonkyu) != EOF)
	{
		bango_t[no] = bango;
		strcpy(simei_t[no], simei);
		kihonkyu_t[no] = kihonkyu;
		no++;
	}
	/* ファイルクローズ */
	fclose(fp);

	/* 最大件数(max)にnoを格納する */
	max_no = no;

	/* 開始番号に１、終了番号に10を格納する */
	start_no = 1;
	end_no = 10;

	/* 終了番号が最大件数より大きいとき、終了番号に最大件数を格納する */
	if (end_no > max_no)
	{
		end_no = max_no;
	}

	/* 開始番号から終了番号までの。10件分のカウンタと明細（番号、氏名、基本給）を各テーブルより表示する。
	なお、基本給は3桁ごとにカンマを挿入する。*/
	hantei = 2;
	while (hantei != 9<= end_no)
	{
			printf("\n          <<<  社員マスタ一覧  >>>\n");
			printf("        番号 氏名　　　　　　　　  　基本給\n");
			for (no = 0, lno = 4; no <= end_no; no++, lno++)
			{
				printf("   %4d", no + 1);
				Henshu(kihonkyu_t[no], kihonkyux);
				printf("%04d %-15s %11s\n", bango_t[no], simei_t[no], kihonkyux);
			}
			/* 判定を入力 */
			printf("前＝１、後＝２、終わり=９　を押してください：");
			scanf("%d", &hantei);

			/* 判定が1で開始番号が10より大きいときは、開始番号より10を引く */
			if (hantei == 1 && start_no > 10)
			{
				start_no = start_no - 10;
			}
			/* 判定が２で(開始番号＋10)が最大件数より小さいときは、開始番号に10を足す */
			if (hantei == 2 && (start_no + 10) < max_no)
			{
				start_no = start_no + 10;
			}
			
			/* 開始番号＋９を終了番号に格納する */
			end_no = start_no + 9;

			/* 終了番号が最大件数より大きいとき、終了番号に最大件数を格納する */
			if (end_no > max_no)
			{
				end_no = max_no;
			}
	}

	getchar();
	return 0;
}