#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
  FILE *fp1,*fp2;
  char str[128];
  if((fp1=fopen("d:\\text1.txt","r"))==NULL)//ֻ��һ���Ѿ����������ļ� 
  {
  	printf("1.Cannot open file\n");
  	exit(0);
  }
  if((fp2=fopen("d:\\text2.txt","w"))==NULL)//�½�һ���ļ� 
  {
  	printf("2.Cannot open file\n");
  	exit(0);
  }
  if((strlen(fgets(str,128,fp1)))>0)//��fp1�ļ���ǰ128���ַ���ֵ���ַ���str �����fp1��û���ַ������жϲ����� 
  {
  	fputs(str,fp2);//��str�е��ַ���Ҳ����fp1�е��ַ� ���Ƶ�fp2 
  	printf("%s",str);
  }
  fclose(fp1);//�ر��ļ� 
  fclose(fp2);
  return 0;	
}