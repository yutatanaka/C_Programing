
/*  
	�E�^����ꂽ�����f�����ǂ������ׂ�
	�E���邢�͗^����ꂽ���܂ł̑f����񋓂���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, j, yakusuu;

	printf("�f�������߂܂��B��������͂��Ă��������F");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		yakusuu = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0) yakusuu++;
		}
		if (yakusuu == 2) printf("%d ", i);
	}
	printf("\n");

	getchar();
	getchar();
	return 0;
}