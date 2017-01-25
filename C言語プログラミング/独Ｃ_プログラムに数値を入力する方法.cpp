
/*
	1.　例1.4の1.のプログラムを入力し、コンパイルして実行してください。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	float f;

	printf("整数を入力してください：");	
	scanf("%d", &num);

	printf("浮動小数点数を入力してください：");
	scanf("%f", &f);

	printf("numは %d\n", num);
	printf("fは %f\n", f);

	getchar();
	return 0;
}