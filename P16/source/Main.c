/*����L��J�r��A�ê��[���ɮ�output.txt*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80
int main(void)
{
	FILE *fptr;  //�ŧi���V�ɮת�����fptr
	char str[MAX],ch;	  //�ŧi�r���}�Cstr�A�Ψ��x�s����L��J���r��
	int i=0, file;
	file= fopen_s(&fptr, "D://NTUT/program/HW/program/107360227_�P�f�� 1227/P16/output.txt", "a");
	printf("�п�J�r��A��ENTER�䵲����J�G\n");

		while ((ch = getchar()) !='\n'&& i<MAX) 
		{
			str[i++] = ch;
		}
		putc('\n', fptr);
		fwrite(str, sizeof(char), i, fptr);
		fclose(fptr);
		printf("\n�ɮת��[����!!\n");
	

	system("Pause");
	return 0;
}
