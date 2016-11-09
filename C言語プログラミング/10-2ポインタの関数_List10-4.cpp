
/*
	ポインタによって身長を間接的に操作する
*/

#include <stdio.h>

/* ひろ子さん(180cm未満の身長を180cmに伸ばす) */
void hiroko(int *height)
{
	if (*height < 180)
	{
		*height = 180;
	}
}

int main()
{
	int sato = 178;		/* 佐藤君の身長 */
	int sanaka = 175;	/* 佐中君の身長 */
	int masaki = 179;	/* 真崎君の身長 */

	hiroko(&masaki);
	printf("佐藤君の身長：%d\n", sato);
	printf("佐中君の身長：%d\n", sanaka);
	printf("真崎君の身長：%d\n", masaki);

	getchar();
	return 0;
}