
/*  
	R047の問題でテーブル(配列)の参照をポインタを使用したプログラムに変更しなさい
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* 変数宣言 */
	int i, j, k, mojisu;				/* 飛ばす文字数 */
	char in_mojiretu[81] = { 0 };		/* 入力する文字列 */
	char out_mojiretu[81] = { 0 };		/* 出力する文字列 */
	char mojiretu[] = { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0" };

	/* ポインタの宣言 */
	char *p_in, *p_out;
	char *p_moji;

	printf("------------------英文の暗号化------------------\n");
	printf("英文を入力してください。\n");					fgets(in_mojiretu, 81, stdin);
	printf("スライドする文字数を入力してください－－－>");	scanf("%d", &mojisu);

	/* アドレスをセット */
	p_in = in_mojiretu;
	p_out = out_mojiretu;
	p_moji = mojiretu;

	/* for文で判定と検索 */
	for (i = 0; *(p_in + i) != '\0'; i++)
	{
		*(p_out + i) = *(p_in + i);
		for (j = 0; j < 52; j++)
		{
			if (*(p_in + i) == *(p_moji + j))
			{
				k = j + mojisu;
				if (k >= 52)
				{
					k -= 52;
				}
				*(p_out + i) = *(p_moji + k);
			}
		}
	}

	printf("----------------暗号化後の文字列----------------\n");
	printf("\n");
	printf("%s\n", out_mojiretu);
	printf("\n");
	printf("------------------------------------------------\n");
	getchar();
	getchar();
	return 0;
}