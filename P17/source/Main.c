/*使用fread函數讀取檔案內容*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 80
int main(void)
{
	FILE *fptr;  //宣告指向檔案的指標fptr
	char str[MAX];	  //宣告字元陣列str，用來儲存由鍵盤輸入的字串
	int bytes, file;
	file = fopen_s(&fptr, "D://NTUT/program/HW/program/107360227_周柏文 1227/P17/output.txt", "r");


	while (!feof(fptr)) //如果還沒讀到檔尾
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);//印出檔案內容
	}
	fclose(fptr);
	system("Pause");
	return 0;
}
