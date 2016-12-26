
/*  
	画面より顧客番号、顧客名、売掛残高を入力し、ファイルに出力する(Practice6-1を参考にして作成)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/* 登録処理関数 */
void Touroku(int &shurui)
{
	/* 顧客レコード(構造体の宣言) */
	typedef struct
	{
		int bango;
		char namae[15];
		int zandaka;
	}KOKYAKU_M;

	char kakunin[5];
	FILE *fp;
	char *fileName = "kokyaku_m.txt";
	KOKYAKU_M krec;

	system("cls");
	printf("\n");
	printf("          1  顧客番号（半角数字４桁）　：");	scanf("%d*c", &krec.bango);
	printf("          2  顧 客 名（全角7文字）　　 ：");	scanf("%s", krec.namae);
	printf("          3  売掛残高（半角数字８桁）　：");	scanf("%d*c", &krec.zandaka);
	printf("\n");
	printf("          登録しますか？(yes/no)       ：");	scanf("%s", kakunin);

	/* 登録確認がyesならば */
	if (strcmp(kakunin, "yes") == 0)
	{
		/* 出力方法(shurui)ならば */
		if (shurui == 1)
		{
			fp = fopen(fileName, "w");
		}
		else if (shurui == 2)
		{
			fp = fopen(fileName, "a");
		}

		/* 顧客レコードをファイルに出力する。fwriteを使用する */
		//fwrite(&krec, sizeof(KOKYAKU_M), 1, fp);
		fprintf(fp, "%d %s %d\n", krec.bango, krec.namae, krec.zandaka);
		fclose(fp);
	}
	
}

int main()
{
	int shurui = 0;					/* 種類 */
	char kakunin[5];				/* 確認 */

	do
	{
		/* 初期画面を表示し出力方法を受け取る */
		printf("          <<<  顧客マスタ登録  >>>\n");
		printf("\n            新規登録＝１、追加登録＝２：");
		scanf("%d", &shurui);

		/* 登録関数を実行する。引数を出力方法とする */
		Touroku(shurui);
		/* 2件目以降の出力方法は2とする */
		shurui = 2;

		/* 処理を続けるかどうかの表示をし確認に結果を受け取る */
		printf("          続けますか？(yes/no)         ：");	scanf("%s", kakunin);
	} while (strcmp(kakunin, "yes") == 0);

	getchar();
	return 0;
}