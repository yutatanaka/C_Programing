
/*
	ファイル操作２ 
	２つのファイルを読み込んでデータに格納し、新しくテキストファイルで出力する
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *fileName_s = "alphabet_small.txt";
	char *fileName_b = "alphabet_big.txt";
	char *string_s;
	char *string_b;
	char *p;
	char *pp;
	long b_size, s_size;
	FILE *fp_s;		
	FILE *fp_b;			
	FILE *fpw;

	/* ファイルが存在しなければエラ―処理 */
	if ((fp_s = fopen(fileName_s, "r")) == NULL)
	{
		printf("file open error!\n");
		return false;
	}
	if ((fp_b = fopen(fileName_b, "r")) == NULL)
	{
		printf("file open error!\n");
		return false;
	}
	/* ファイルのサイズを求める */
	fseek(fp_s, 0, SEEK_END);
	s_size = ftell(fp_s);
	fseek(fp_s, 0, SEEK_SET);
	
	fseek(fp_b, 0, SEEK_END);
	b_size = ftell(fp_b);
	fseek(fp_b, 0, SEEK_SET);

	/* 2つのファイルのメモリの確保 */
	string_s = (char*)malloc(s_size);
	string_b = (char*)malloc(b_size);

	/* 読込 */
	fread(string_s, sizeof(char), s_size, fp_s);
	fread(string_b, sizeof(char), b_size, fp_b);

	/* ファイル2つ分のメモリを確保 */
	p = (char*)malloc(s_size + b_size);

	/* ポインタ変数ppにｐのアドレスをコピー */
	pp = p;

	/* データを挿入 */
	memcpy(pp, string_s, s_size);
	pp += 26;
	memcpy(pp, string_b, b_size);
	
	/* ファイルクローズ */
	fclose(fp_s);
	fclose(fp_b);

	/* ファイルオープン */
	fpw = fopen("alphabet_bond.txt", "wb");
	fwrite(p, sizeof(char), s_size + b_size, fpw);
	
	/* ファイルクローズ */
	fclose(fpw);

	getchar();
	return 0;
}