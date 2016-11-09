
/*
	関数の引数としてのポインタ
*/

#include <stdio.h>

/* ひろこさんの理想の身長にする関数（180cmに変更） */
void hiroko(int *height)
{
	if (*height < 180)
	{
		*height = 180;
	}
}

int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	hiroko(&masaki);
	printf("佐藤君の身長：%d\n", sato);
	printf("佐中君の身長：%d\n", sanaka);
	printf("真崎君の身長：%d\n", masaki);

	getchar();
	return 0;
}