
/*  
	年(西暦)、月、日を入力し、元日からの経過日数と年末までの残日数を求める。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int matubi_t[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };/* 末日テーブル */
	int year = 0, month = 0, day = 0;	/* 年、月、日 */
	int zansu = 365;					/* 残数 */
	int nissu;							/* 経過日数 */

	/* 入力処理 */
	printf("--------------経過日数と残日数計算--------------\n");
	printf("年(西暦)を入力してください―――＞");	scanf("%d", &year);
	printf("　　　月を入力してください―――＞");	scanf("%d", &month);
	printf("　　　日を入力してください―――＞");	scanf("%d", &day);

	/* うるう年の判定(うるう年のときは末日テーブルの2月の欄に29、残数に366を格納する) */
	if (year / 400 == 0 || year / 100 != 0 && year % 4 == 0)
	{
		matubi_t[2] = 29;
		zansu = 366;
	}
	/* 経過日数と残数を求める */
	/* 経過日数(nissu)に0を格納する */
	nissu = 0;
	/* 経過月数分の末日を日数に加算する */
	for (int i = 0; i < month; i++)
	{
		nissu += matubi_t[i]; 
	}
	/* 入力した日(day)を経過日数に加算する */
	nissu += day;
	/* 残数から経過日数を引く */
	zansu -= nissu;

	/* 経過日数と残数を上記レイアウトにしたがって表示する */
	printf("　　　経過日数は%d日です。\n", nissu);
	printf("　　　　残日数は%d日です。\n", zansu);

	getchar();
	getchar();
	return 0;
}