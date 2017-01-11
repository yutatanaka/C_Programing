
/*
	コメントで示された部分１と２を、適切な処理に変えてプログラムを完成させなさい
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* 数値配列代入用ポインタ変数 */
	int *array = NULL;
	int i;
	/* １ 長さ10の配列の生成(mallocを使用) */
	array = (int *)malloc(sizeof(int *) *10);

	for (i = 0; i < 10; i++)
	{
		/* 値の代入 */
		array[i] = i;			
	}
	/* 値の表示 */
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	/* ２ 生成したメモリの解放(free()を使用) */
	free(array);

	getchar();
	return 0;
}