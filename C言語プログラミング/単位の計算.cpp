
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char s[5];

	scanf("%d %s", &n, s);

	if (n >= 1 && n <= 1000)
	{
		/* “ü—Í‚³‚ê‚½•¶Žš‚ªkm‚¾‚Á‚½‚ç */
		if (strcmp(s, "km") == 0)
		{
			n = n * 1000 * 100 * 10;
		}
		/* “ü—Í‚³‚ê‚½•¶Žš‚ªm‚¾‚Á‚½‚ç */
		else if (strcmp(s, "m") == 0)
		{
			n = n * 100 * 10;
		}
		/* “ü—Í‚³‚ê‚½•¶Žš‚ªcm‚¾‚Á‚½‚ç */
		else if (strcmp(s, "cm") == 0)
		{
			n = n * 10;
		}
	}

	printf("%d", n);

	getchar();
	getchar();
	return 0;
}