
/*
	�֐��̈����Ƃ��Ẵ|�C���^
*/

#include <stdio.h>

/* �Ђ낱����̗��z�̐g���ɂ���֐��i180cm�ɕύX�j */
void hiroko(int *height)
{
	if (*height < 180)
	{
		*height = 180;
	}
}

int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	hiroko(&masaki);
	printf("�����N�̐g���F%d\n", sato);
	printf("�����N�̐g���F%d\n", sanaka);
	printf("�^��N�̐g���F%d\n", masaki);

	getchar();
	return 0;
}