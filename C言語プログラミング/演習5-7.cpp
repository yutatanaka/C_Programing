
/* 
	演習5-7

	右に示すように、配列に格納するデータ数と要素の値を読み込んで、その値を表示するプログラムを作成せよ。
	表示の形式は、全要素の値をコンマとスペースで区切ったものを{ と }で囲んだものとする。
	なお、配列の要素数は、List5-12と同様に、要素数をオブジェクト形式マクロとして定義しておくこと

	<出力結果>
	データ数：4
	1番：23
	2番：74
	3番：9
	4番；835
	{23, 74, 9, 835};
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 4

int main()
{
	int i;
	int num;
	int value[NUMBER];

	printf("データ数：");
	scanf("%d", &num);
	for (i = 0; i < num; ++i)
	{
		printf("%2d番：", i + 1);
		scanf("%d", &value[i]);
	}

	printf("{");

	for (i = 0; i < NUMBER; ++i)
	{
		if (i < NUMBER - 1)
		{
			printf("%d, ", value[i]);
		}
		else if (i < NUMBER)
		{
			printf("%d", value[i]);
		}
	}

	printf("}");
	
	getchar();
	getchar();
	return 0;
}