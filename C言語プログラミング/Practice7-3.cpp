
/*
	顧客番号、伝票区分、金額を入力し、顧客マスタとのチェックを行い、ＯＫならば
	伝票ファイルに出力する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 顧客レコード(構造体の宣言) */
typedef struct
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec, ktbl[51];	

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

/* ファイルポインタ */
FILE *fpm;				/* 顧客マスタ用ポインタ */
FILE *fpd;				/* 伝票用ポインタ */

void Shoki();
void Touroku();

int main()
{

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
	while (fread(&krec, sizeof(KOKYAKU_M), 1, fpm))
	{
		ktbl[no].bango = krec.bango;
		strcpy(ktbl[no].namae, krec.namae);
		ktbl[no].zandaka = krec.zandaka;
		no++;
	}

	/* データがなくなったらファイルをクローズし、noをmaxとする */
	fclose(fpm);
	max = no;

	do
	{
		/* 登録関数を実行する */
		Touroku();

		/* "続けますか?(y/n)"を表示し、確認(kakunin)に結果を受け取る */
		printf("続けますか？(yes/no)      :");	scanf("%s", kakunin);

		/* 確認が"yes"のときは繰り返す */
	} while (strcmp(kakunin, "yes") == 0);

	getchar();
	return 0;
}


/* 初期画面を表示する関数 */
void Shoki()
{
	printf("          <<<  売上入金データ入力  >>>\n\n");
	printf("          新規登録＝１、追加登録＝２    :");
	scanf("%d", &shurui);
}

/* 登録処理をする関数 */
void Touroku()
{
	system("cls");

	/* 顧客番号(bango)を入力する */
	printf("        1 顧客番号（半角数字4桁）　："); scanf("%d", &bango);
	printf("        2 顧 客 名                  ：");

	/* 顧客番号でテーブルのサーチを行う */
	no = 0;
	while (bango != ktbl[no].bango && no < max)
	{
		no++;
	}

	/* テーブルに顧客番号が存在したら */
	if (ktbl[no].bango == bango)
	{
		/* 顧客名を表示する */
		printf("%s\n", ktbl[no].namae);
		/* 伝票区分(kubun)と金額(kingaku)を入力する */
		printf("        3 伝票区分（売上=1, 入金=2）　：");	scanf("%d", &drec.kubun);
		printf("        4 金　　額（半角数字８桁）　　：");	scanf("%d", &drec.kingaku);

		/* "ＯＫ？(yes/no)"を表示し、確認(kakunin)を受け取る */
		printf("        ＯＫ？（yes/no）　　　　　　　：");	scanf("%s", kakunin);
		/* 確認が"yes"だった場合、伝票ファイルを出力する */
		/* この時出力方法(shurui)が１のときオープンモードを"w"で２のとき"a"で開く */
		if (strcmp(kakunin, "yes") == 0)
		{
			if (shurui == 1)
			{
				fpd = fopen("denpyo_d.txt", "w");
				shurui = 2;
			}
			else
			{
				fpd = fopen("denpyo_d.txt", "a");
			}
			//fprintf(fpd, "%d %d %d", drec.bango, drec.kubun, drec.kingaku);
			fwrite(&drec, sizeof(DENPYO_D), 1, fpd);		
			fclose(fpd);
		}
	}
	else
	{
		printf("\n顧客マスタ未登録。確認　OK？(yes)");	scanf("%s", kakunin);
	}
}