
/*
	���K
*/

#include <stdio.h>

int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	int *isako, *hiroko;

	isako = &sato;
	hiroko = &masaki;

	printf("�����q����̍D���Ȑl�̐g���F%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐g���F%d\n", *hiroko);

	isako = &sanaka;
	*hiroko = 180;

	putchar('\n');
	printf("�����N�̐g���F%d\n", sato);
	printf("�����N�̐g���F%d\n", sanaka);
	printf("�^��N�̐g���F%d\n", masaki);
	printf("�����q����̍D���Ȑl�̐g���F%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐g���F%d\n", *hiroko);

	getchar();
	return 0;
}