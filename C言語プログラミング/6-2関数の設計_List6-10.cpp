
/*  
	�t�@�C���L���͈�

	�ō��_�����߂�
	<�o�͌���>
	5�l�̓_������͂��Ă��������B
	1�F53
	2�F49
	3�F21
	4�F91
	5�F77
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5		/* �w���̐l�� */

int tensu[NUMBER];		/* �z��̒�` */
int top();				/* �֐�top�̊֐����^�錾 */

int main()
{
	extern int tensu[];	/* �z��̐錾 */
	int i;

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d�F", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("�ō��_��%d\n", top());

	return 0;
}

/* ---�z��tensu�̍ő�l��Ԃ��֐�top�̊֐���`--- */
int top()
{
	extern int tensu[];		/* �z��̐錾 */
	int i;
	int max = tensu[0];

	for (i = 1; i < NUMBER; i++)
	{
		if (tensu[i] > max)
		{
			max = tensu[i];
		}
	}
	return max;
}