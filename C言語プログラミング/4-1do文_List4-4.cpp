
/*
	����������Z�q

	�����l�����X�Ɠǂݍ���ō��v�ƕ��ς�\��(���̂Q)
	������������Z�q�ƌ�u�������Z�q�𗘗p
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

		sum += t;	/* sum��t�������� */
		cnt++;		/* cnt���C���N�������g���� */

		printf("�܂��H<Yes�c0 / No�c9>�F");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("���v��%d�ŕ��ς�%.2f�ł��B\n", sum, (double)sum / cnt);

	getchar();
	return 0;
}