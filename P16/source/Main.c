/*由鍵盤輸入字串，並附加到檔案output.txt*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80
int main(void)
{
	FILE *fptr;  //宣告指向檔案的指標fptr
	char str[MAX],ch;	  //宣告字元陣列str，用來儲存由鍵盤輸入的字串
	int i=0, file;
	file= fopen_s(&fptr, "D://NTUT/program/HW/program/107360227_周柏文 1227/P16/output.txt", "a");
	printf("請輸入字串，按ENTER鍵結束輸入：\n");

		while ((ch = getchar()) !='\n'&& i<MAX) 
		{
			str[i++] = ch;
		}
		putc('\n', fptr);
		fwrite(str, sizeof(char), i, fptr);
		fclose(fptr);
		printf("\n檔案附加完成!!\n");
	

	system("Pause");
	return 0;
}
