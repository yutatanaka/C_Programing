#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	const int m = 20;
	char str[m];
	char s_i[1000] = { 0 };
    scanf("%d", &n);
	
	if (n >= 1 && n <= 20 && m >= 1 && m <= 20)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%s", str);
			strcat(s_i, str);
			
			if (i < n - 1)
			{
				strcat(s_i, ",");
			}
			else
			{
				strcat(s_i, ".");
			}
		}
	}
	printf("Hello %s", s_i);

	getchar();
	getchar();
	return 0;
}
