
/*
	���K4-14

	�E�Ɏ����悤�ɁA1234567890���J��Ԃ��\������v���O�������쐬����B
	�ǂݍ��܂ꂽ�����l�̌�����������\�����邱�ƁB

	<�o�͌���>

	���̐�������͂��Ă��������F25
	1234567890123456789012345
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int j = 1;
	int num;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d ", j);
		j++;
		if (j == 10)
		{
			j = 0;
		}

	}
	getchar();
	return 0;
}