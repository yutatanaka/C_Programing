
/*
	�|�C���^�ɂ���Đg�����ԐړI�ɑ��삷��
*/

#include <stdio.h>

/* �Ђ�q����(180cm�����̐g����180cm�ɐL�΂�) */
void hiroko(int *height)
{
	if (*height < 180)
	{
		*height = 180;
	}
}

int main()
{
	int sato = 178;		/* �����N�̐g�� */
	int sanaka = 175;	/* �����N�̐g�� */
	int masaki = 179;	/* �^��N�̐g�� */

	hiroko(&masaki);
	printf("�����N�̐g���F%d\n", sato);
	printf("�����N�̐g���F%d\n", sanaka);
	printf("�^��N�̐g���F%d\n", masaki);

	getchar();
	return 0;
}