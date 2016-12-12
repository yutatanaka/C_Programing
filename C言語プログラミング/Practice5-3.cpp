
/*
	数字Nを入力し、1からNまでの総和を求める。関数を利用し再起処理を行う。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 総和を求める関数 */
int Souwa(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + Souwa(n - 1);
	}
}

int main()
{
	int suuji = 0, kotae = 0;			/* 数字、答え */
	
	/* 入力処理 */
	printf("------------総和を求める関数------------\n");
	printf("数字を入力してください--->");	scanf("%d", &suuji);
		
	/* 数字を引数として総和を求める関数(souwa)を実行し答え(kotae)に受け取る */
	kotae = Souwa(suuji);

	/* 答え(総和の結果) (kotae)を表示する*/
	printf("1～%dまでの総和は%dです。", suuji, kotae);

	getchar();
	getchar();
	return 0;
}