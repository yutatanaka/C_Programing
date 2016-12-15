
/*  
	Practice6-4のmain関数部分のみをコピーしPractice6-5とする
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 関数のプロトタイプ宣言 */
void Henshu(int, char *);

int main()
{
	int suuji = 0;			/* 数字(入力用) */
	char moji[13] = { 0 };	/* 文字格納用配列 */

	/* 入力処理 */
	printf("数字(最大９桁)を入力してください------->");	scanf("%d", &suuji);
	
	/* Henshu関数を実行 */
	Henshu(suuji, moji);

	/* 表示処理 */
	printf("編集された数字------------------------>%s\n", moji);	

	getchar();
	return 0;
}