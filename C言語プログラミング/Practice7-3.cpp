
/*
	顧客番号、伝票区分、金額を入力し、顧客マスタとのチェックを行い、ＯＫならば
	伝票ファイルに出力する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* 顧客レコード(構造体の宣言) */
typedef struct
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec;

/* 伝票レコード(構造体の宣言) */
typedef struct
{
	int bango;
	int kubun;
	int kingaku;
}DENPYO_D;

DENPYO_D drec;

/* 変数 */
int no, max;			/* マスタカウンタ(no)、マスタ件数(max) */
int shurui, bango;		/* 処理判定、顧客番号 */
char kakunin[5];

/* 初期画面を表示する関数 */
void Shoki()
{
	printf("          <<<  売上入金データ入力  >>>\n\n");
	printf("          新規登録＝１、追加登録＝２    :");
	scanf("%d", &shurui);
}

int main()
{
	/* ファイルポインタ */
	FILE *fpm;				/* 顧客マスタ用ポインタ */
	FILE *fpd;				/* 伝票用ポインタ */

	/* 初期画面を表示し出力方法を受け取る */
	Shoki();
	/* １：新規登録･･･今回1件目から出力する(ファイルオープンモードを"w") */
	if (shurui == 1)
	{
		fpm = fopen("kokyaku_m.txt", "w");
	}
	/* ２：追加登録･･･前回の続きから出力する(ファイルオープンモードを"a") */
	else if (shurui == 2)
	{
		fpm = fopen("kokyaku_m.txt", "a");
	}

	/* 顧客マスタファイル"kokyaku_m.txt"を入力モード"r"でオープンする */
	if ((fpm = fopen("kokyaku_m.txt", "r")) == NULL)
	{
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}

	/* 顧客マスタファイルを読み込み、noを添え字として、各項目をテーブルに格納する */
	no = 0;
	while (fscanf(fpm, "%d %s %d", &krec.bango, krec.namae, &krec.zandaka))
	{

	}


	getchar();
	return 0;
}