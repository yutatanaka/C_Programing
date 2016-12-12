
/*  
	図形の種類(正方形＝1、長方形＝2、円＝3)を入力する。
	図形の種類ごとに面積を求める関数を実行する。面積の表示はメイン関数で行う。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PAI 3.141592

/* 正方形の面積を求める関数 */
int Seihoukei()
{
	float hen = 0, result = 0;

	printf("辺の長さ：");	scanf("%f", &hen);

	/* 正方形の面積を計算 */
	result = hen * hen;

	/* 結果を返す */
	return result;
}

/* 長方形の面積を求める関数 */
int Chouhoukei()
{
	float tate = 0, yoko = 0, result = 0;
	
	printf("縦の長さ：");	scanf("%f", &tate);
	printf("横の長さ：");	scanf("%f", &yoko);

	/* 長方形の面積を計算 */
	result = tate * yoko;

	/* 結果を返す */
	return result;
}

/* 円の面積を求める関数 */
int En()
{
	float hankei = 0, result = 0; 

	printf("半径の長さ：");	scanf("%f", &hankei);

	/* 円の面積を計算 */
	result = hankei * hankei * PAI;

	/* 結果を返す */
	return result;
}


int main()
{
	int shurui;					/* 種類 */
	float menseki;				/* 面積 */
	
	/* 入力処理 */
	while (1)
	{
		printf("図形の種類を入力(正方形＝1、長方形＝2、円＝3):");	scanf("%d", &shurui);

		switch (shurui)
		{
		case 1:
			/* 1を入力したら正方形の面積を求める関数を呼び出す */
			menseki = Seihoukei();
			printf("面積は　%.2fです\n", menseki);
			break;
		case 2:
			/* 2を入力したら長方形の面積を求める関数を呼び出す */
			menseki = Chouhoukei();
			printf("面積は　%.2fです\n", menseki);
			break;
		case 3:
			/* 3を入力したら円の面積を求める関数を呼び出す */
			menseki = En();
			printf("面積は　%.2fです\n", menseki);
			break;
		default:
			break;
		}
	}
	getchar();
	getchar();
	return 0;
}