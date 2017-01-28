
/*
	次の関数はどこに問題がありますか？
*/

#include <stdio.h>

void func(void)
{
	int i;

	printf("数値を入力してください：");
	scanf("%d", &i);

	return i;
}

int main()
{
	return 0;
}

/*  
	答え

	このfunc関数はvoid型なので戻り値を返すことができない。
*/