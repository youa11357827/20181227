/*�����ɮפ��e���L�ɮ�*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr1,*fptr2;   //�ŧi���V�ɮת�����fptr
	char ch;	  //�ŧi�r���ܼ�ch�A�Ψӱ���Ū�����r��
	int count = 0, file1,file2;//�ŧi���count�A�Ψӭp���ɮת��r��
	file1 = fopen_s(&fptr1, "D://NTUT/program/HW/program/107360227_�P�f�� 1227/P15/welcome.txt", "r");
	file2 = fopen_s(&fptr2, "D://NTUT/program/HW/program/107360227_�P�f�� 1227/P15/output.txt", "w");
	if (fptr1 != NULL&&fptr2!=NULL)
	{
		while ((ch = getc(fptr1)) != EOF) //�P�_�O�_��F�ɧ�
		{
			putc(ch, fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("\n�ɮ׫�������\n", count);
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("Pause");
	return 0;
}
