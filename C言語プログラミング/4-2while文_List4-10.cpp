
/*
	<�����l���t���ɕ\��>

	�񕉂̐����l��ǂݍ���ŁA������t���ɕ\������B

	�ǂݍ��񂾐��̐����l���t���ɕ\��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	do{
		printf("���̐�������͂��Ă��������F");
		scanf("%d", &no);
		if (no <= 0)
		{
			puts("\a���łȂ�������͂��Ă��������B");
		}
	} while (no <= 0);

	/* no��0���傫���Ȃ��Ă��� */
	printf("���̐����t����ǂނ�");
	while (no > 0)
	{
		printf("%d", no % 10);			/* �ŉ��ʂ̌��̒l��\�� */
		no /= 10;						/* �E�Ɉꌅ���炷 */
	}
	puts("�ł��B");

	getchar();
	return 0;
}