
/*  
	���̃v���O�����͂ǂ��ɖ�肪����܂����H
*/

#include <stdio.h>

int f1(void);

int main()
{
	double answer;

	answer = f1();

	printf("%f", answer);

	getchar();
	return 0;
}

int f1(void)
{
	return 100;
}

/*  
	����

	���͂Ȃ����A�֐��͐����^��Ԃ��Ă���̂ɂ�������炸
	���������_�^�Ɋi�[���ĕ\�������Ă��邽�ߌ���������\��������

*/