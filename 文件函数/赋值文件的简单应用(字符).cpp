#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
  FILE *fp3;
  char s;
  if((fp3=fopen("d:\\text3.txt","w"))==NULL)//�½�һ���ļ� fp3
  {
  	printf("3.Cannot open file\n");
  	exit(0);
  }
 while((s=getchar())!='\n')
  fputc(s,fp3);//��str�е��ַ������Ƶ�fp3 
  fclose(fp3);
  return 0;	
}