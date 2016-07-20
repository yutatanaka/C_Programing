
/*
	演習3-13

	List3-17のプログラムを、if文でなくswitch文を用いて書き換えよ。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;
	
	printf("何月ですか：");
	scanf("%d", &month);

	switch (month)
	{
	case 3:
	case 4:
	case 5: puts("春です。");   break;
	case 6: 
	case 7:
	case 8: puts("夏です。");   break;
	case 9:
	case 10:
	case 11: puts("秋です。");   break;
	case 12:
	case 1:
	case 2: puts("冬です。");   break;
	default: puts("そんな季節は存在しません。"); break;

	}

	getchar();
	return 0;
}