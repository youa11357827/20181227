/*�ϥ�fread���Ū���ɮפ��e*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 80
int main(void)
{
	FILE *fptr;  //�ŧi���V�ɮת�����fptr
	char str[MAX];	  //�ŧi�r���}�Cstr�A�Ψ��x�s����L��J���r��
	int bytes, file;
	file = fopen_s(&fptr, "D://NTUT/program/HW/program/107360227_�P�f�� 1227/P17/output.txt", "r");


	while (!feof(fptr)) //�p�G�٨SŪ���ɧ�
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);//�L�X�ɮפ��e
	}
	fclose(fptr);
	system("Pause");
	return 0;
}
