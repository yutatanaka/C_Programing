
/*
	変数と宣言

	二つの変数に整数値を格納して表示
*/

#include <stdio.h>

int main()
{
	int vx, vy;		/* vxとvyはint型の変数 */
	
	vx = 57;		/* vxに57を代入 */
	vy = vx + 10;	/* vyにvx + 10を代入 */

	printf("vxの値は%dです。\n", vx);	/* vxの値を表示 */
	printf("vyの値は%dです。\n", vy);	/* vyの値を表示 */

	getchar();
	return 0;
}