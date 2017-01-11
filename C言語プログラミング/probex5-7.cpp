
/* 
	文字列として定義されている「100」を、整数の値に変換して出力するプログラム
	コメントされている部分に、不完全な部分を実装し、プログラムを完成させる
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char numString[] = "100";		/* 数値の文字列 */
	int num;						/* numStringの数値を入れる変数 */

	/* numStringを整数値に変換し、numに代入 */
	num = atoi(numString);

	printf("%d\n", num);

	getchar();
	return 0;
}