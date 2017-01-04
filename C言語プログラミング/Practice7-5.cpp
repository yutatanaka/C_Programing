
/*
	伝票ファイルを入力し、顧客番号で並び替えを行い、ソート済み伝票ファイルを出力する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* データの定義(各巻数で共通に使用できるように、関数のまえに定義する) */
/* 伝票レコード（構造体の宣言） */
typedef struct
{
	int bango;
	int kubun;
	int kingaku;
}DENPYO_D;
DENPYO_D drec;		/* 伝票　　　レコード */
DENPYO_D dtbl[51];	/*           テーブル */
DENPYO_D wrec;		/*           ワーク */

/* ファイルポインタ */
FILE *fpd1;			/* 入力用ファイルポインタ */
FILE *fpd2;			/* 出力用ファイルポインタ */

/* 変数 */
int i, k;			/* 添え字用(i)(k) */
int no, max;		/* カウンタ(no)、件数(max) */
int bango;			/* 顧客番号(bango) */

/* 伝票入力関数 */
void Denpyo_Input()
{
	/* ①伝票ファイル"denpyo_d.txt"を入力モード"r"でオープンする */
	fpd1 = fopen("denpyo_d.txt", "r");
	/* 伝票ファイルを読み込み、noを添え字として、各項目をテーブルに格納する */
	no = 0;
	while (fscanf(fpd1, "%d %d %d", &drec.bango, &drec.kubun, &drec.kingaku) != EOF)
	{
		dtbl[no].bango = drec.bango;
		dtbl[no].kubun = drec.kubun;
		dtbl[no].kingaku = drec.kingaku;
		no++;
	}
	/* データがなくなったらファイルをクローズし、no-1をmaxとする */
	fclose(fpd1);
	max = no - 1;

	/* タイトルと入力件数を表示する */
	printf("          <<<  伝票ソート  >>>\n");
	printf("          入力件数　：　%d  件\n");
}

/* ソート関数 */
void Denpyo_Sort()
{
	/* iをmaxから１まで(i > 0の間)　②を繰り返す */
	for (i = max; i > 0; i--)
	{
		/* kを0からi-1まで(k < iの間)　③を繰り返す */
		for (k = 0; k < i; k++)
		{
			if (dtbl[k].bango > dtbl[k + 1].bango)
			{
				/* k番目をワークへ */
				wrec.bango = dtbl[k].bango;
				wrec.kubun = dtbl[k].kubun;
				wrec.kingaku = dtbl[k].kingaku;
				/* k+1番目をk番目へ */
				dtbl[k].bango = dtbl[k + 1].bango;
				dtbl[k].kubun = dtbl[k + 1].kubun;
				dtbl[k].kingaku = dtbl[k + 1].kingaku;
				/* ワークをk+1番目へ */
				dtbl[k + 1].bango = wrec.bango;
				dtbl[k + 1].kubun = wrec.kubun;
				dtbl[k + 1].kingaku = wrec.kingaku;
			}
		}
	}
}

/* 伝票出力関数 */
void Denpyo_Output()
{
	/* 伝票ファイル"denpyo_ds.txt"を出力モード"w"でオープンする */
	fpd2 = fopen("denpyo_ds.txt", "w");
	/* ソート済みのテーブルより、格納件数分ソート済み伝票ファイルを出力する */
	for (k = 0; k <= max; k++)
	{
		
		drec.bango = dtbl[k].bango;
		drec.kubun = dtbl[k].kubun;
		drec.kingaku = dtbl[k].kingaku;
		fprintf(fpd2, "%d %d %d\n", drec.bango, drec.kubun, drec.kingaku);
	}
	/* 出力が終わったらファイルをクローズし、出力件数を表示し、正常終了とする */
	fclose(fpd2);
	printf("          出力件数　：　%d  件\n", max + 1);
	printf("          正常終了\n");
}

/* メイン処理 */
int main()
{
	Denpyo_Input();
	Denpyo_Sort();
	Denpyo_Output();
	getchar();
	return 0;
}