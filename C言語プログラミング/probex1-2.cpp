
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int value;
	int max =0, min =0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; ++i)
	{
		value = rand() % 10 + 1;
		printf("%d ", value);
		if (max <= value)
			max = value;
	}
	putchar('\n');
	printf("�ő�l�F%d\n", max);
	printf("�ŏ��l�F%d\n", min);

	getchar();
	return 0;
}