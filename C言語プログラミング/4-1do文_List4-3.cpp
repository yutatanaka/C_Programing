
/*
	�������̐����l�̍��v�ƕ��ς����߂遄
	�����l�����X�Ɠǂݍ���ō��v�ƕ��ς�\��

	�����l�����X�Ɠǂݍ���ō��v�ƕ��ς�\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0;	/* ���v */
	int cnt = 0;	/* �����l�̌� */
	int retry;		/* �����𑱂��邩 */

	do{
		int t;

		printf("�����l����͂��Ă��������F");
		scanf("%d", &t);

		sum = sum + t;	/* sum��t���������l��sum�ɑ��(sum��t��������) */
		cnt = cnt + 1;	/* cnt��1���������l��cnt�ɑ��(cnt��1��������) */

		printf("�܂��H<Yes�c0 / No�c9> :");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("���v��%d�ŕ��ς�%.2f�ł��B\n", sum, (double)sum / cnt);
	getchar();
	return 0;
}