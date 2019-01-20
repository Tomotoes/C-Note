#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
  FILE *fp3;
  char str[128];
  if((fp3=fopen("d:\\text3.txt","w"))==NULL)//新建一个文件 fp3
  {
  	printf("3.Cannot open file\n");
  	exit(0);
  }
  gets(str); 
  fputs(str,fp3);//把str中的字符，复制到fp3 
  printf("%s",str);
  fclose(fp3);
  return 0;	
}