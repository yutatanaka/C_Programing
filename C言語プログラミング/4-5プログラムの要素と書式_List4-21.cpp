
/*
	自由形式

	九九の表を表示

	1⃣単語の途中に空白類文字を入れてはいけない

	2⃣前処理指令の途中で改行してはいけない

	3⃣文字列リテラルの途中や文字定数の途中で改行してはいけない
*/

#include <stdio.h>

int main(
	){
	int i, j
		;

	for (i =			1;i<=9;i
		++){
		for (j = 1; j <= 9; j
			++)printf("%3d",
			i*j); putchar('\n');
	}


	getchar();
	return 0;
}