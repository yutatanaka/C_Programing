
/*
	�|�C���^�ɂ���Đg�����ԐړI�ɑ��삷��
*/

#include <stdio.h>

int main()
{
	int sato = 178;		/* �����G�j�N�̐g�� */
	int sanaka = 175;	/* �����r�ƌN�̐g�� */
	int masaki = 179;	/* �^��G�F�N�̐g�� */

	int *isako, *hiroko;

	isako = &sato;		/* isako��sato   ���w��(�����N���D��) */
	hiroko = &masaki;	/* hiroko��masaki���w��(�^��N���D��) */

	printf("�����q����̍D���Ȑl�̐g���F%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐g���F%d\n", *hiroko);

	isako = &sanaka;	/* isako��sanaka���w��(�C���ς����) */

	*hiroko = 180;		/* hiroko�̎w���I�u�W�F�N�g��180���� */
						/* �Ђ�q����̍D���Ȑl�̐g�������������� */
	putchar('\n');
	printf("�����N�̐g���F%d\n", sato);
	printf("�����N�̐g���F%d\n", sanaka);
	printf("�^��N�̐g���F%d\n", masaki);
	printf("�����q����̍D���Ȑl�̐g���F%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐g���F%d\n", *hiroko);

	getchar();
	return 0;
}