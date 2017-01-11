
/*
	ソート済み顧客マスタファイルとソート済み伝票ファイルを入力し、顧客マスタ残高一覧を表示する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "henshu.h"

/* 顧客マスタ */
typedef struct
{
	int bango;
	char namae[10];
	int zandaka;
}KOKYAKU_M;
KOKYAKU_M krec;										/* 顧客マスタ　レコード */
KOKYAKU_M ktbl[51];									/* 　　　　　　テーブル */

/* 伝票レコード */
typedef struct
{
	int bango;
	int kubun;
	int kingaku;
}DENPYO_D;
DENPYO_D drec;										/* 伝票　　　　レコード */
DENPYO_D dtbl[51];									/* 　　　　　　テーブル */

/* ファイルポインタ */
FILE *fpm;											/* 顧客マスタ用ポインタ */
FILE *fpd;											/* 伝票用ポインタ */

/* 変数 */
int m_no, m_max;									/* マスタカウンタ(m_no), マスタ件数(m_max) */
int d_no, d_max;									/* 伝票カウンタ(d_no), 伝票件数(d_max) */
int lno, n_zandaka;									/* 表示行(lno), 最新残高(n_zandaka) */
char uriagex[15], nyukinx[15], zandakax[15];		/* 売上表示(uriagex)、表示入金(nyukinx), 表示残高(zandakax) */

void Master_Input();
void Denpyo_Input();
void Zandaka_Hyouji();
void Title_Hyouji();
void Footer_Hyouji();

int main()
{
	Master_Input();
	Denpyo_Input();
	Zandaka_Hyouji();

	getchar();
	getchar();
	return 0;
}

/* マスタ入力関数 */
void Master_Input()
{
	/* 顧客マスタファイル"kokyaku_s.txt"を入力モード"r"でオープンする */
	if ((fpm = fopen("kokyaku_s.txt", "r")) == NULL)
	{
		printf("File Open Error!\n");
		exit(EXIT_FAILURE);
	}
	/* 顧客マスタファイルを読み込み、m_noを添え字として、各項目をテーブルに格納する */
	m_no = 0;
	//while (fscanf(fpm, "%d %s %d", &krec.bango, krec.namae, &krec.zandaka) != EOF)
	while(fread(&krec, 1, sizeof(KOKYAKU_M), fpm))
	{
		ktbl[m_no].bango = krec.bango;
		strcpy(ktbl[m_no].namae, krec.namae);
		ktbl[m_no].zandaka = krec.zandaka;
		m_no++;
	}
	/* データがなくなったらファイルをクローズし、m_no - 1をm_maxとする  */
	fclose(fpm);
	m_max = m_no - 1;
}

/* 伝票入力関数 */
void Denpyo_Input()
{
	/* 伝票ファイル"denpyo_ds.txt"を入力モード"r"でオープンする */
	if ((fpd = fopen("denpyo_ds.txt", "r")) == NULL)
	{
		printf("File Open Error!\n");
		exit(EXIT_FAILURE);
	}
	/* 伝票ファイルを読み込み、d_noを添え字として、各項目をテーブルに格納する */
	d_no = 0;
	//while (fscanf(fpd, "%d %d %d", &drec.bango, &drec.kubun, &drec.kingaku) != EOF)
	while(fread(&drec, sizeof(DENPYO_D), 1, fpd))
	{
		dtbl[d_no].bango = drec.bango;
		dtbl[d_no].kubun = drec.kubun;
		dtbl[d_no].kingaku = drec.kingaku;
		d_no++;
	}
	/* データがなくなったらファイルをクローズし、d_no - 1をd_maxとする */
	fclose(fpd);
	d_max = d_no - 1;
}

/* 残高表示関数 */
void Zandaka_Hyouji()
{
	/* タイトル表示関数(Title_Hyouji())を実行する */
	Title_Hyouji();
	/* 伝票カウンタ(d_no)を0にする */
	d_no = 0;

	/* マスタカウンタ(m_no)を0からm_no <= m_maxの間5～１０までを繰り返す */
	for (m_no = 0; m_no <= m_max; m_no++)
	{
		/* 区切り行"------------"を表示する */
		printf("---------------------------------------------------------------\n");
		printf("%4d", m_no + 1);
		/* 顧客番号、顧客名、残高を表示する。このとき残高は３桁ごとにカンマを挿入する */
		Henshu(ktbl[m_no].zandaka, zandakax);
		printf("      %04d %-15s %32s\n", ktbl[m_no].bango, ktbl[m_no].namae, zandakax);
		/* 残高(zandaka)を最新残高(n_zandaka)とする */
		n_zandaka = ktbl[m_no].zandaka;
		/* 顧客マスタm_no番目の顧客番号が伝票テーブルd_no番目の顧客番号と等しく、d_no <= d_maxの間は８～９までを繰り返す */
		while (ktbl[m_no].bango == dtbl[d_no].bango && d_no <= d_max)
		{
			if (dtbl[d_no].kubun == 1)
			{
				/* 金額を売上欄に最新残高を残高欄にカンマを挿入して表示する */
				Henshu(dtbl[d_no].kingaku, uriagex);
				/* 最新残高に金額を加える */
				n_zandaka = n_zandaka + dtbl[d_no].kingaku;
				Henshu(n_zandaka, zandakax);
				printf("%42s            %11s\n", uriagex, zandakax);
			}
			else
			{
				/* 金額を入金欄に最新残高を残高欄にカンマを挿入して表示する */
				Henshu(dtbl[d_no].kingaku, nyukinx);
				/* 最新残高より金額を引く */
				n_zandaka = n_zandaka - dtbl[d_no].kingaku;
				Henshu(n_zandaka, zandakax);
				printf("%53s%11s\n", nyukinx, zandakax);
			}
			/* 伝票カウンタ(d_no)に１を加える */
			d_no++;
			/* マスタカウンタがマスタ件数と等しいとき(最後のデータのとき)フッタ行(Footer_Hyouji())を表示する */
			if (m_no == m_max)
			{
				Footer_Hyouji();
			}
		}
	}
}

/* タイトル表示関数 */
void Title_Hyouji()
{
	printf("                    <<<  顧客マスタ残高一覧  >>>\n");
	printf("          番号 顧客名　　　　　　　　　売上　　　入金　　  売掛残高\n");
}

/* フッタ表示関数 */
void Footer_Hyouji()
{
	printf("--------------------------------------------------------------------\n\n");
	printf("          マスタ入力件数 ＝ %d 件、 伝票件数 ＝ %d 件\n", m_max + 1, d_max + 1);
	printf("          終わりです。確認したら何かキーを押してください。\n");
	getchar();
}