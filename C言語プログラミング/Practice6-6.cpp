
/*  
	社員マスタファイルを読み込み、一旦テーブルに格納し、テーブルから一覧を表示する
	１０件表示したら確認メッセージを表示し、何かキーが押されたら次の10件を表示する
	最後のデータを表示したら確認メッセージを表示し、何かキーが押されたら処理を終了する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 関数のプロトタイプ宣言 */
void Henshu(int, char*);

int main()
{
	int bango = 0, kihonkyu = 0, no = 0, max = 0, kensu = 0;	/* 番号、基本給、カウンタ用、最大件数 */
	char kihonkyux[15] = { 0 };									/* 編集後の基本給 */
	char simei[15] = { 0 };										/* 氏名用配列 */
	int bango_t[50] = { 0 };									/* 番号テーブル */
	int kihonkyu_t[50] = { 0 };									/* 基本給テーブル */
	char simei_t[50][20] = { 0 };								/* 氏名テーブル */
	FILE *fp;													/* ファイルポインタの宣言 */
	char *fileName = "shain_m2.txt";							/* ファイル名 */

	/* ファイルオープンした際にＮＵＬＬを返したらエラー処理 */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}

	/* EOFになるまでファイルを読み込み、番号(bango)は番号テーブル(bango_t)へ
	   氏名(simei)は氏名テーブル(simei_t)へ
	   基本給(kihonkyu)は基本給テーブル(kihonkyu_t)へそれぞれ格納する
	   添え字およびカウンタをnoとする　*/
	while (fscanf(fp, "%d %s %d", &bango, simei, &kihonkyu) != EOF)
	{
		
		bango_t[no] = bango;
		strcpy(simei_t[no], simei);
		kihonkyu_t[no] = kihonkyu;
		no++;
	}
	/* ファイルクローズ */
	fclose(fp);
	
	/* 最大件数(max)にnoの内容を格納する */
	max = no;

	/* 10件ごとのカウンタの明細(番号、氏名、基本給)を各テーブルより表示する
	なお、基本給は3桁ごとにカンマを挿入する　*/
	
	no = 0;
	kensu = 1;
	while (no <= max)
	{
		if (kensu == 1)
		{
			printf("          <<<  社員マスタ一覧  >>>\n\n");
			printf("          番号 氏名　　　　　　基本給\n");
		}
		/* 編集関数を呼び出して基本給の3桁ごとにカンマをつける */
		Henshu(kihonkyu_t[no], kihonkyux);
		printf("%04d %-15s %11s", bango_t[no], simei_t[no], kihonkyux);

		if (kensu >= 10 || no == max)
		{
			printf("\n       確認したら何かキーをおしてください。\n");
			getchar();
			kensu = 0;
		}
		no++;
		kensu++;
	}
	getchar();
	return 0;
}