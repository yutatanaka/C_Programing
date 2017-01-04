
/*
	顧客マスタファイルを入力し、顧客番号で並び替えを行い、ソート済み顧客マスタを出力する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* データの定義(各巻数で共通に使用できるように、関数の前に定義する) */
/* 顧客レコード(構造体の宣言) */
typedef struct
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec;
KOKYAKU_M ktbl[50];
KOKYAKU_M wrec;

/* ファイルポインタ */
FILE *fpm1;					/* 入力用ファイルポインタ */
FILE *fpm2;					/* 出力用ファイルポインタ */

/* 変数 */
int n, j;					/* 添え字用(n)(j) */
int no, max;				/* マスタカウンタ(no),マスタ件数(max) */
int bango;					/* 顧客番号(bango) */

/* マスタ入力関数 */
void Master_Input()
{
	/* 顧客マスタファイル"kokyaku_m.txt"を入力モード"r"でオープンする */
	fpm1 = fopen("kokyaku_m.txt", "r");
	/* 顧客マスタファイルを読み込み、noを添え字として、各項目をテーブルに格納する */
	no = 0;
	while (fscanf(fpm1, "%d %s %d", &krec.bango, krec.namae, &krec.zandaka) != EOF)
	{
		ktbl[no].bango = krec.bango;
		strcpy(ktbl[no].namae, krec.namae);
		ktbl[no].zandaka = krec.zandaka;
		no++;
	}
	/* データがなくなったらファイルをクローズし、no-1をmaxとする */
	fclose(fpm1);
	max = no - 1;

	/* タイトルと入力件数を表示する */
	printf("          <<<  顧客マスタソート　>>>\n");
	printf("          入力件数　：  %d　件\n", max + 1);
}

/* ソート関数 */
void Master_Sort()
{
	/* nをmaxから１まで(n > 0の間) ②を繰り返す */
	for (n = max; n > 0; n--);
	{
		/* jを0からn-1まで(j < nの間)　③を繰り返す */
		for (j = 0; j < n; j++)
		{
			/* テーブルのj番目の顧客番号がj+1番目の顧客番号より大きいとき */
			if (ktbl[j].bango > ktbl[j + 1].bango)
			{
				/* j番目とj+1番目の入れ替えを行う */
				/* j番目をワークへ */
				wrec.bango = ktbl[j].bango;		
				strcpy(wrec.namae, ktbl[j].namae);
				wrec.zandaka = ktbl[j].zandaka;

				/* j+1番目をj番目へ */
				ktbl[j].bango = ktbl[j + 1].bango;
				strcpy(ktbl[j].namae, ktbl[j + 1].namae);
				ktbl[j].zandaka = ktbl[j + 1].zandaka;

				/* ワークよりj+1番目へ */
				ktbl[j + 1].bango = wrec.bango;
				strcpy(ktbl[j + 1].namae, wrec.namae);
				ktbl[j + 1].zandaka = wrec.zandaka;
			}
		}
	}
}

/* マスタ出力関数 */
void Master_Output()
{
	/* 顧客マスタファイル"kokyaku_s.txt"を出力モード"w"でオープンする */
	fpm2 = fopen("kokyaku_s.txt", "w");
	/* ソート済みのテーブルより、格納件数分ソート済み顧客マスタファイルを出力する*/
	for (no = 0; no <= max; no++)
	{
		krec.bango = ktbl[no].bango;
		strcpy(krec.namae, ktbl[no].namae);
		krec.zandaka = ktbl[no].zandaka;
		fwrite(&krec, sizeof(KOKYAKU_M), 1, fpm2);		/* データ　出力 */
	}
	/* ③出力が終わったらファイルをクローズし、出力件数を表示し、"正常終了"と表示する */
	fclose(fpm2);
	printf("          出力件数　：　%d　件\n", max + 1);
	printf("          正常終了\n");
}

/* メイン処理 */
int main()
{
	Master_Input();

	Master_Sort();

	Master_Output();

	getchar();
	return 0;
}