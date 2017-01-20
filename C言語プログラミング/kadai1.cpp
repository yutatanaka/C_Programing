
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i;
	long size;
	float vertex[15] = { 0 };
	char *fileName = "cube.mqo";
	char *str, *p, *pp;
	FILE *fp;
	
	/* �t�@�C�������݂��Ȃ���΃G���[���� */
	if ((fp = fopen(fileName, "r")) == NULL)
	{
		printf("�t�@�C���I�[�v�����s\n");
		return -1;
	}

	/* �t�@�C���̃T�C�Y�����߂�*/
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	
	/* �T�C�Y�����Ƀt�@�C�����̃������m�ۂ��A�S�ď����� */
	str = (char*)malloc(size + 1);
	memset(str, '\0', size + 1);
	
	/* �t�@�C����ǂݍ��񂾂��ƃt�@�C������� */
	fread(str, sizeof(char), size, fp);
	fclose(fp);

	/* �ړ��Ă̕�����̌������s���A�����܂œǂݔ�΂� */
	p = strstr(str, "vertex 4 {");
	p += strlen("vertex 4 {");

	i = 0;
	while (*p != '}')
	{
		if ((*p >= '0') && (*p <= '9') || (*p == '-'))
		{
			vertex[i] = atof(p);
			printf("%f\n", vertex[i]);

			while (*p != ' ')
			{
				p++;
			}
			i++;
		}
		p++;
	}
	
	free(str);
	getchar();
	return 0;
}