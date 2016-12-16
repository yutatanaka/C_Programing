
/*  
	画面より顧客番号、顧客名、売掛残高を入力し、ファイルに出力する(Practice6-1を参考にして作成)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* 顧客レコード(構造体の宣言) */
typedef struct 
{
	int bango;
	char namae[15];
	int zandaka;
}KOKYAKU_M;

KOKYAKU_M krec;

/* 登録処理関数 */
void Touroku(int shuri)
{
	
}

int main()
{
	int shurui = 0;					/* 種類 */
	char kakunin[5] = {0};			/* 確認 */

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
		printf("続けますか？(yes/no)\n");	scanf("%s", kakunin);
	} while (strcmp(kakunin, "yes") == 0);

	getchar();
	return 0;
}