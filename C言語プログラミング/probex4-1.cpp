
/*  
	�|�C���^�ϐ����̑���
*/

#include <stdio.h>

int main()
{
	/* �T�C�YSIZE�̔z���p�ӂ��� */
	int nums[] = { 1, 2, 3, 4, 5 };
	int *p = NULL;
	int i;

	/* p��nums�̃A�h���X����� */
	p = nums;	
	for (i = 0; i < 5; i++)
	{
		printf("%d", *(p + (4 - i)));
	}
	getchar();
	return 0;
}