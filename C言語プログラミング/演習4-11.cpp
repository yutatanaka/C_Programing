
/*  
	���K4-11

	List4-10�̃v���O�������A���ʂ̏o�͎��ɓǂݍ��񂾒l���\������悤�ɏ���������B

	���o�͌��ʁ�

	���̐�������͂��Ă��������B
	1963���t����ǂނ�3691�ł��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	do{
		printf("���̐�������͂��Ă�������:");
		scanf("%d", &no);
		if (no <= 0)
		{
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
		}

	} while (no <= 0);


	printf("%d���t����ǂނ�", no);
	while (no > 0)
	{
		printf("%d", no % 10);
		no /= 10;
	}
	puts("�ł��B");

	getchar();
	return 0;
}