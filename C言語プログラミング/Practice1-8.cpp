
/* 
	秒数で表される時間を入力し、時間、分、秒に変換し表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int byou = 0;		/* 秒数 */
	int h = 0;			/* 時間 */
	int m = 0;			/* 分 */
	int s = 0;			/* 秒 */

	printf("秒数を入力してください：");	scanf("%d", &byou);

	/* 分、余りを秒とする */
	m = byou / 60;
	s = byou % 60;
	/* 時間、余りを分とする */
	h = m / 60;
	m = m % 60;

	printf("%d秒 = %d時間 %d分 %d秒\n", byou, h, m, s);

	getchar();
	getchar();
	return 0;
}