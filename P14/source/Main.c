/*顯示檔案內容*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;   //宣告指向檔案的指標fptr
	char ch;	  //宣告字元變數ch，用來接收讀取的字元
	int count = 0,file;//宣告整數count，用來計算檔案的字數
	file = fopen_s(&fptr,"D://NTUT/program/HW/program/107360227_周柏文 1227/P14/welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF) //判斷是否到達檔尾
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else
	{
		printf("檔案開啟失敗!!\n");
	}
	system("Pause");
	return 0;
}