
/* 
	���K5-7

	�E�Ɏ����悤�ɁA�z��Ɋi�[����f�[�^���Ɨv�f�̒l��ǂݍ���ŁA���̒l��\������v���O�������쐬����B
	�\���̌`���́A�S�v�f�̒l���R���}�ƃX�y�[�X�ŋ�؂������̂�{ �� }�ň͂񂾂��̂Ƃ���B
	�Ȃ��A�z��̗v�f���́AList5-12�Ɠ��l�ɁA�v�f�����I�u�W�F�N�g�`���}�N���Ƃ��Ē�`���Ă�������

	<�o�͌���>
	�f�[�^���F4
	1�ԁF23
	2�ԁF74
	3�ԁF9
	4�ԁG835
	{23, 74, 9, 835};
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 4

int main()
{
	int i;
	int num;
	int value[NUMBER];

	printf("�f�[�^���F");
	scanf("%d", &num);
	for (i = 0; i < num; ++i)
	{
		printf("%2d�ԁF", i + 1);
		scanf("%d", &value[i]);
	}

	printf("{");

	for (i = 0; i < NUMBER; ++i)
	{
		if (i < NUMBER - 1)
		{
			printf("%d, ", value[i]);
		}
		else if (i < NUMBER)
		{
			printf("%d", value[i]);
		}
	}

	printf("}");
	
	getchar();
	getchar();
	return 0;
}