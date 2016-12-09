
/*  
	英字文字列と文字数を入力する。
	入力した英字文字列を指定された文字数だけ後にスライドし文字列の暗号化を行う。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int BUFF_MAX = 54;
	int i = 0, j = 0, k = 0, mozisu = 0;		/* 文字数 */
	char input_buff[BUFF_MAX] = { 0 };			/* 入力文字列 */
	char output_buff[BUFF_MAX] = { 0 };			/* 出力文字列 */
	const char moziretu[BUFF_MAX] = "abcdefghijklmnopqrstyvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0"; /* 文字ﾃｰﾌﾞﾙ */

	/* 入力処理 */
	printf("-----------------暗号化-----------------\n");
	printf("英文を入力してください。\n");	fgets(input_buff, BUFF_MAX, stdin);
	printf("スライドする文字数を入力してください―――≫");	scanf("%d", &mozisu);

	/* 文字を検索、比較 */
	for (i = 0; input_buff[i] != '\0'; i++)
	{
		output_buff[i] = input_buff[i];
		
		for (j = 0; j < 54; j++)
		{
			if (input_buff[i] == moziretu[j])
			{
				k = j + mozisu;
				if (k >= 52)
				{
					k -= 52;
				}
				output_buff[i] = moziretu[k];
			}
		}
	}
	
	printf("------------暗号化後の文字列------------\n");
	printf("\n");
	printf("%s", output_buff);
	printf("\n");
	printf("----------------------------------------\n");

	getchar();
	getchar();
	return 0;
}