
/*
	�z��

	5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int uchida;				/* ���c�N�̓_�� */
	int satoh;				/* �����N�̓_�� */
	int sanaka;				/* �����N�̓_�� */
	int hiraki;				/* ���،N�̓_�� */
	int masaki;				/* �^��N�̓_�� */
	int sum = 0;			/* ���v�_ */

	printf("1�ԁF");   scanf("%d", &uchida);  sum += uchida;
	printf("2�ԁF");   scanf("%d", &satoh);  sum += satoh;
	printf("3�ԁF");   scanf("%d", &sanaka);  sum += sanaka;
	printf("4�ԁF");   scanf("%d", &hiraki);  sum += hiraki;
	printf("5�ԁF");   scanf("%d", &masaki);  sum += masaki;

	printf("���v�_�F%5d\n", sum);
	printf("���ϓ_�F%5.1f\n", (double)sum / 5);

	getchar();
	getchar();
	return 0;
}