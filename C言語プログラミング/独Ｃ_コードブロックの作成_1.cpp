
/*
	2�̐��������Z�܂��͌��Z����v���O�������쐬���Ă��������B
	�ŏ��ɉ��Z�̎�ނ�I�������A����2�̐�������͂����Č��ʂ�\��������̂Ƃ��܂��B
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, choice;

	printf("1�F���Z�@2�F���Z\n�ǂ��炩��I�����Ă��������F");	
	scanf("%d", &choice);

	printf("1�ڂ̐�������͂��Ă��������F");	scanf("%d", &num1);
	printf("2�ڂ̐�������͂��Ă��������F");	scanf("%d", &num2);

	if (choice == 1)
	{
		printf("%d + %d = %d", num1, num2, num1 + num2);
	}
	else if (choice == 2)
	{
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}

	getchar();
	return 0;
}