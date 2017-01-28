
/*  
	次のプログラムはどこに問題がありますか？
*/

#include <stdio.h>

int f1(void);

int main()
{
	double answer;

	answer = f1();

	printf("%f", answer);

	getchar();
	return 0;
}

int f1(void)
{
	return 100;
}

/*  
	答え

	問題はないが、関数は整数型を返しているのにもかかわらず
	浮動小数点型に格納して表示をしているため誤解をされる可能性がある

*/