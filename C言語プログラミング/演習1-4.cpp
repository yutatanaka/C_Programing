
/*
	演習1-4

	int型変数の宣言に実数値の初期化子(たとえば3.14や5.7など)を与えるとどうなるだろうか。
	プログラムを作成して確認せよ。
*/

#include <stdio.h>

int main()
{
	int vx = 3.14;
	int vy = 5.7;

	printf("vxの値は%dです。\n", vx);
	printf("vyの値は%dです。\n", vy);
	getchar();
	return 0;
}

/*
	＜結果＞

	小数点以下が切り捨てられる
*/