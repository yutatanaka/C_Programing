
/* 
	名前、身長を5人分入力し、最も高い人の名前と身長を表示する。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int max = 0;					/* 最高身長 */
	int sincho[5] = { 0 };			/* 身長 */
	char namae[10];					/* 名前 */
	char max_namae[10];	/* 最高身長の人の名前 */
	int i;

	printf("名前と身長を入力する。\n");
	/* 5回名前と身長を入力する */
	for (i = 1; i < 6; i++)
	{
		printf("%d人目の情報を入力してください\n", i);
		printf("名前：");	scanf("%s", namae);
		printf("身長：");	scanf("%d", &sincho[i - 1]);
		if (max < sincho[i - 1])
		{
			max = sincho[i - 1];
			strcpy(max_namae, namae);
		}
	}
	printf("身長が一番高いのは%sさんで%dcmです。\n", max_namae, max);


	getchar();
	getchar();
	return 0;
}