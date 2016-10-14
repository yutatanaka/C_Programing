
// ‘o•ûŒüŒ^

#include <stdio.h>

void Swap(int array[])
{
	int temp = 0;
	int head = 0;
	int tail = 4;

	while (head != tail)
	{
		for (int i = head + 1; i <= tail; i++)
		{
			if (array[head] > array[i])
			{
				temp = array[i];
				array[i] = array[head];
				array[head] = temp;
			}
		}

		head++;

		for (int n = tail - 1; n >= head; n--)
		{
			if (array[tail] < array[n])
			{
				temp = array[n];
				array[n] = array[tail];
				array[tail] = temp;
			}
		}
		tail--;
	}
}

int main()
{
	int head = 0, tail = 0;
	int array[] = { 5, 2, 6, 1, 9 };

	Swap(array);
	for (int k = 0; k < 5; k++)
	{
		printf("%d", array[k]);
	}

	/*
	Swap(array);
	for (int k = 0; k < 5; k++)
	{
		printf("%d", array[k]);
	}
	*/
	
	getchar();
	return 0;
}