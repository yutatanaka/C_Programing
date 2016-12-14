
/* 
	画面より社員番号、氏名、基本給を入力しファイルに出力する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* 関数のプロトタイプ宣言 */
void Touroku(int);

int main()
{
	int shurui = 0;				/* 種類 */
	char kakunin[5] = { 0 };	/* 確認 */

	do
	{

		/* ①初期画面を表示し出力方法(shurui)を受け取る */
		printf("                  <<< 社員マスタ登録 >>>    \n");
		printf("          新規登録＝１、追加登録＝２　　：");	scanf("%d", &shurui);

		/*
			1:新規登録･･･今回1件目から出力する。(ファイルオープンモードを"w")
			2:追加登録･･･前回の続きから出力する。(ファイルオープンモードを"a")
			*/

		/* ②登録関数を実行する。引数を出力方法とする */
		Touroku(shurui);

		/* ③2件目以降の出力の出力方法は２とする(shurui = 2;) */
		shurui = 2;

		/* ④処理を続けるかどうかの表示をし、確認(kakunin)に結果を受け取る */
		printf("                続けますか？(yes / no):");	scanf("%s", kakunin);

		/* ⑤確認が'y'または'Y'のときは①から③を繰り返す */
	} while ( strcmp(kakunin, "yes") == 0 || strcmp(kakunin, "YES") == 0);

	getchar();
	getchar();
	return 0;
}

/* 登録処理関数 */
void Touroku(int shurui)
{
	FILE *fp;							/* (1)ファイルポインタの宣言 */
	int bango = 0;						/* 番号 */
	int kihonkyu = 0;					/* 基本給 */
	char kakunin[5] = { 0 };			/* 確認 */
	char namae[20] = { 0 };				/* 氏名 */

	/* 入力画面を表示し、社員番号(bango)、氏名(namae)、基本給(kihonkyu)を入力する */
	printf("          1 社員番号 (半角数字4桁)　　：");	scanf("%d", &bango);
	printf("          2 氏　　名 (全角7文字)　　　：");	scanf("%s", namae);
	printf("　　　　　3 基 本 給 (半角数字8桁)　  ：");	scanf("%d", &kihonkyu);

	/* 登録確認(kakunin)を受け取る */
	printf("                登録しますか？(yes / no):");	scanf("%s", kakunin);

	if (strcmp(kakunin, "yes") == 0 || strcmp(kakunin, "YES"))
	{
		if (shurui == 1)
		{
			/* 出力方法(shurui)が1ならファイル"shain_m.txt"を"w"モード */
			fp = fopen("shain_m.txt", "w");
		}
		else if (shurui == 2)
		{
			/* 出力方法(shurui)が2ならファイル"shain_m.txt"を"a"モード */
			fp = fopen("shain_m.txt", "a");
		}

		fprintf(fp, "%04d    %-15s       %08d\n", bango, namae, kihonkyu);
		fclose(fp);
	}
}