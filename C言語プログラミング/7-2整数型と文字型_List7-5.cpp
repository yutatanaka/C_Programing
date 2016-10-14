
/*
	配列の要素数を求める
*/

#include <stdio.h>

int main()
{
	int vi[10];
	double vd[25];
	
	printf("配列viの要素数＝%u\n", (unsigned)(sizeof(vi) / sizeof(int)));
	printf("配列vdの要素数＝%u\n", (unsigned)(sizeof(vd) / sizeof(double)));
	/*
	
	*/

	getchar();
	return 0;
}