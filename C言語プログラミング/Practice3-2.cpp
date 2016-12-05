
/*  
	部門コードが９になるまで、部門コードと経費を入力する。
	部門ごとの経費の比率に応じて一般管理費(4000)を按分する。
	部門コード、部門名、経費、比率、按分金額を表示する。
	［金額は千円単位とする］
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kensu = 0, goukei = 0;						/* 件数、合計 */
	double ritu = 0;								/* 比率 */
	int bumonCode = 0, keihi = 0, anbun = 0;		/* 部門コード、経費、按分 */
	int bumonCode_t[10] = { 0 };					/* 部門テーブル */
	int keihi_t[10] = { 0 };						/* 経費テーブル */
	char bumonName_t[20][10] = { 0 };				/* 部門名テーブル */

	printf("部門コード：");	scanf("%d", &bumonCode);
	printf("経費(千円)：");	scanf("%d", &keihi);

	/* 部門コードが9になるまで次の処理を繰り返す */
	while (bumonCode != 9)
	{
		/* 経費を合計に加算する */
		goukei += keihi;
		/* 部門コードを部門テーブル(bumonCode_t)の該当箇所に(件数を添え字)格納する */
		bumonCode_t[kensu] = bumonCode;
		/* 経費を経費テーブル(keihi_t)の該当箇所に(件数を添え字)格納する */
		keihi_t[kensu] = keihi;
		/* 部門コードに対応した部門名を部門名テーブル(bumonName_t)の該当箇所に(件数を添え字)格納する */
		switch (bumonCode)
		{
		case 1:
			strcpy(bumonName_t[kensu], "総務部");
			break;
		case 2:
			strcpy(bumonName_t[kensu], "人事部");
			break;
		case 3:
			strcpy(bumonName_t[kensu], "企画部");
			break;
		case 4:
			strcpy(bumonName_t[kensu], "営業部");
			break;
		case 5:
			strcpy(bumonName_t[kensu], "製造部");
			break;
		}
		/* 件数に1を加算する(カウント) */
		++kensu;
		/* 2件目以降の部門コードを入力する */
		printf("部門コード：");	scanf("%d", &bumonCode);
		/* 部門コードが9でなければ、経費を入力する */
		if (bumonCode != 9)
		{
			printf("経費(千円)：");	scanf("%d", &keihi);
		}
	}

	/* 合計の格納と見出し表示 */
	/* 部門コードテーブルの最後に(件数添え字)9を格納する */
	bumonCode_t[kensu] = 9;
	/* 部門名テーブルの最後に(件数を添え字)"合　計"を格納する */
	strcpy(bumonName_t[kensu], "合　計");
	/* 経費テーブルの最後に(件数を添え字)経費の合計を加える */
	keihi_t[kensu] = goukei;
	/* 見出しを表示する */
	printf("______________________________________________________________\n");
	printf("コード\t　　部門名\t\t経費\t　比率\t\t按分金額　\n");
	printf("--------------------------------------------------------------\n");
	
	/* 率、按分金額の計算と明細の表示(格納した件数分繰り返す)(for文を使用) */
	for (int i = 0; i <= kensu; i++)
	{
		/* 率＝部門別経費×100.0÷合計 */
		ritu = keihi_t[i] * 100.0 / goukei;
		/* 按分金額＝4000×率÷100 */
		anbun = 4000 * ritu / 100;
		/* コード、部門名、経費、比率、按分金額を表示 */
		printf("    %d\t　　%s\t\t%5d\t　　%6.1f%%\t  %4d  \n", bumonCode_t[i], bumonName_t[i], keihi_t[i], ritu, anbun);
		/* フッターを表示する */	
	}
	printf("==============================================================");

	getchar();
	getchar();
	return 0;
}