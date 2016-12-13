
/*  
	キーボードから縦、横の長さを入力し、入力した数値のチェック(1～100ならOK)を行う。
	面積の計算を行い、表示する。入力にはinput()関数
	チェックにはcheck()関数、面積の計算にはkeisan()関数を利用する。数値はすべて整数型とする。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* マクロ */
#define MIN 1
#define MAX 100

/* 関数のプロトタイプ宣言 */
int Input(char *s);
int Check(int);
int Keisan(int, int);

int main()
{
	int tate = 0, yoko = 0, menseki = 0;			/* 縦、横、面積 */

	/* メッセージの宣言(表示には次のmsg1からmsg5を使用すること) */
	char msg1[] = "-------長方形の面積を求める関数-------";
	char msg2[] = "縦の長さを入力してください--->";
	char msg3[] = "横の長さを入力してください--->";
	char msg4[] = "長方形の面積----------------->";
	char msg5[] = "--------------------------------------";

	/* msg1の表示 */
	printf("%s\n", msg1);

	/* 入力用関数(Input)にmsg2を渡し(引数とし)、戻り値として縦の長さ(tate)受け取る */
	tate = Input(msg2);

	/* 入力用関数にmsg3を渡し、戻り値として横の長さ(yoko)を受け取る */
	yoko = Input(msg3);

	/* 計算用関数(keisan)に縦の長さ、横の長さを渡し、面積(menseki)を受け取る */
	menseki = Keisan(tate, yoko);

	/* msg4と面積を表示する */
	printf("%s%d\n", msg4, menseki);

	/* msg5を表示する */
	printf("%s\n", msg5);

	getchar();
	getchar();
	return 0;
}

/* 入力用関数 */
int Input(char *s)
{
	/* 長さ、結果 */
	int nagasa = 0, kekka = 0; 

	do
	{
		/* 長さを入力 */
		printf("%s", s);	scanf("%d", &nagasa);

		/* チェック用関数に長さを渡し、結果(kekka)を受け取る */
		kekka = Check(nagasa);

		/* 結果が0でないときは"Error 1～100の範囲ではありません。"の表示を行い、①から③を繰り返す(do while使用) */
		if (kekka != 0)
		{
			printf("Error 1～100の範囲ではありません。\n");
		}

	} while (kekka != 0);

	return nagasa;
}

/* チェック用関数 */
int Check(int x)
{
	/* xがMIN以上でMAX以下の時0を戻り値とする */
	if (x > MIN && x < MAX)
	{
		return 0;
	}
	/* そうでないときは1を戻り値とする */
	else
	{
		return 1;
	}
}

/* 面積計算用関数 */
int Keisan(int x, int y)
{
	/* x × y を戻り値とする */
	return x * y;
}
