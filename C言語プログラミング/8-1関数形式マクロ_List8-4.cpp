
/*
	�֐��`���}�N���ƃR���}���Z�q
	�x��𔭂��Ȃ���\�����s���}�N��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define puts_alert(str)	(putchar('\a'), puts(str))

int main()
{
	int n;

	printf("��������͂��Ă��������G");
	scanf("%d", &n);

	if (n)
		puts_alert("���̐��̓[���ł͂���܂���B");
	else
		puts_alert("���̐��̓[���ł��B");

	return 0;
}