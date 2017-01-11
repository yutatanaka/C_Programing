
/*  
	ポインタ変数ｐの操作
*/

#include <stdio.h>

int main()
{
	/* サイズSIZEの配列を用意する */
	int nums[] = { 1, 2, 3, 4, 5 };
	int *p = NULL;
	int i;

	/* pにnumsのアドレスを入力 */
	p = nums;	
	for (i = 0; i < 5; i++)
	{
		printf("%d", *(p + (4 - i)));
	}
	getchar();
	return 0;
}