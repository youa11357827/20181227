/*拷貝檔案內容到其他檔案*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr1,*fptr2;   //宣告指向檔案的指標fptr
	char ch;	  //宣告字元變數ch，用來接收讀取的字元
	int count = 0, file1,file2;//宣告整數count，用來計算檔案的字數
	file1 = fopen_s(&fptr1, "D://NTUT/program/HW/program/107360227_周柏文 1227/P15/welcome.txt", "r");
	file2 = fopen_s(&fptr2, "D://NTUT/program/HW/program/107360227_周柏文 1227/P15/output.txt", "w");
	if (fptr1 != NULL&&fptr2!=NULL)
	{
		while ((ch = getc(fptr1)) != EOF) //判斷是否到達檔尾
		{
			putc(ch, fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("\n檔案拷貝完成\n", count);
	}
	else
	{
		printf("檔案開啟失敗!!\n");
	}
	system("Pause");
	return 0;
}
