
/* 
	数字Nを入力し、N!（Nの階乗）を求める。関数を利用し再起処理を行う。
	・再起処理とは、関数内部で再び自己の関数を呼び出す方法をいう。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 階乗を求める関数 */
int kaijo(int n)
{
	/* nが０であれば */
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * kaijo(n - 1);
	}
}

int main()
{
	unsigned int suuji = 0, kotae = 0;			/* 数字、答え */
	
	/* 入力処理 */
	printf("数字を入力してください---≫");	scanf("%d", &suuji);

	/* 数字を引数として階乗を求める関数(kaijo)を実行し答え(kotae)に受け取る */
	kotae = kaijo(suuji);

	printf("%dの階乗は%dです。\n", suuji, kotae);

	getchar();
	getchar();
	return 0;
}