
/*
	�֐��`���}�N���ƃR���}���Z�q
	�x��𔭂��Ȃ���\�����s���}�N���i�ԈႢ�F�|��E���s�s�\�j
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define puts_alert(str)		{putchar('\a'); puts(str)};

int main()
{
	int n;

	printf("��������͂��Ă��������F");
	scanf("%d", &n);

	if (n)
		puts_alert("���̐��̓[���ł͂���܂���B");
	else
		puts_alert("���̐��̓[���ł��B");

	getchar();
	return 0;
}