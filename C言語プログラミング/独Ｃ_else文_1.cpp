
/*
	2�̐�������͂����A�a�܂��͐ς�\������v���O�������쐬���Ă��������B
	�a�Ɛς̂ǂ����\�����邩�̓��[�U�[���I��������̂Ƃ��܂��B
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, choice;

	printf("1�ڂ̐�������͂��Ă��������F");	scanf("%d", &a);
	printf("2�ڂ̐�������͂��Ă��������F");	scanf("%d", &b);
	while (1)
	{
		printf("�a�Ɛςǂ����\�������܂����H(�a�F1�@�ρF2)�F");	scanf("%d", &choice);
		if (choice == 1)
		{
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		}
		else if (choice == 2)
		{
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		}
		else
		{
			printf("���͂��ꂽ���l���Ԉ���Ă��܂��B\n");
			continue;
		}
	}

	getchar();
	return 0;
}