#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
  FILE *fp1,*fp2;
  char str[128];
  if((fp1=fopen("d:\\text1.txt","r"))==NULL)//只读一个已经创建过的文件 
  {
  	printf("1.Cannot open file\n");
  	exit(0);
  }
  if((fp2=fopen("d:\\text2.txt","w"))==NULL)//新建一个文件 
  {
  	printf("2.Cannot open file\n");
  	exit(0);
  }
  if((strlen(fgets(str,128,fp1)))>0)//把fp1文件中前128个字符赋值到字符串str ，如果fp1中没有字符，则判断不成立 
  {
  	fputs(str,fp2);//把str中的字符，也就是fp1中的字符 复制到fp2 
  	printf("%s",str);
  }
  fclose(fp1);//关闭文件 
  fclose(fp2);
  return 0;	
}