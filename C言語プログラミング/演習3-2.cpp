
/*
	演習3-2

	List3-9の最後のelseを、else if(n < 0)に変更するとどうなるかを検討せよ・
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	if (no == 0)
	{
		puts("その数は0です。");
	}
	else if (no > 0)
	{
		puts("その数は正です。");
	}
	else if (no < 0)
	{
		puts("その数は負です。");
	}

	getchar();
	return 0;
}


/*

	<検証結果>

	else if(no < 0)でも出力結果は同じようになる

*/