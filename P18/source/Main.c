#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *in, *out;
	int cnt,file1,file2;
	char str[100];
	file1 = fopen_s(&in, "D://NTUT/program/HW/program/107360227_©P¬f¤å 1227/P18/welcome.txt", "r");
	file2 = fopen_s(&out, "D://NTUT/program/HW/program/107360227_©P¬f¤å 1227/P18/output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf_s(in, "%s", str,20);
		if (cnt>0)
		{
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);
	system("Pause");
	return 0;
}
