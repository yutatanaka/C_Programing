
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int value;
	srand((unsigned)time(NULL));


	for (int i = 0; i < 5; ++i)
	{
		value = rand() % 10 + 1;
		printf("%d ", value);
	}

	getchar();
	return 0;
}