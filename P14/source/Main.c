/*����ɮפ��e*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;   //�ŧi���V�ɮת�����fptr
	char ch;	  //�ŧi�r���ܼ�ch�A�Ψӱ���Ū�����r��
	int count = 0,file;//�ŧi���count�A�Ψӭp���ɮת��r��
	file = fopen_s(&fptr,"D://NTUT/program/HW/program/107360227_�P�f�� 1227/P14/welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF) //�P�_�O�_��F�ɧ�
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("Pause");
	return 0;
}