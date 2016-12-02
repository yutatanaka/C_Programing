
/*  
	目標貯金額と月々の貯金額を入力する。何年何か月で達成するかを表示する。
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int mokuhyou = 0, chokin = 0;						/* 目標金額、月々の貯金額 */
	int goukei = 0, kikan = 0;							/* 合計、期間 */
	int year = 0, month;								/* 年、月 */

	/* 目標金額と月々の貯金額を入力する */
	printf("目標金額＝");	scanf("%d", &mokuhyou);
	printf("貯金額＝");		scanf("%d", &chokin);

	/* 目標金額が合計金額より多くなるまで次の処理を繰り返す */
	/*
	while (mokuhyou > goukei)
	{
		goukei += chokin;
		++kikan;
	}
	*/

	kikan = mokuhyou / chokin ;

	/* 期間(月数)より年と月数を求める */
	if (kikan >= 12)
	{
		year = kikan / 12;
		month = kikan % 12;
		printf("%d年　%dヶ月です\n", year, month);
	}
	else
	{
		printf("%dヶ月です。\n", kikan);
	}

	getchar();
	getchar();
	return 0;
}