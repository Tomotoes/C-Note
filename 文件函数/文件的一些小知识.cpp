#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{ 
	FILE *fp;
	if((fp=fopen("d://text.txt","w+"))==NULL){
		printf("No!\n");
		exit(0); 
	}
	char s[100],f[100];
	int i,j;
	scanf("%s",s);//上来就先输入空格的话，可以不影响存储 
	for(i=0;i<strlen(s);i++)
	   fwrite(&s[i],sizeof(s[i]),1,fp);
	//fwrite(s,sizeof(s[0])*strlen(s),1,fp);//一次全部存取 
	//for(i=0;i<strlen(s);i++)
	  //fputc(s[i],fp);
	//fputs(s,fp);
	//fprintf(fp,"%s",s);
	//空格存不进去！遇到空格就停止存储！（但是你可以用其他的符号代替空格啊，宝贝!) 
    fseek(fp,0,SEEK_SET);//求 
    fseek(fp,0,SEEK_END);//文件 
	long len=ftell(fp);  //长 
	printf("%ld\n",len);//度 
	fseek(fp,0,SEEK_SET);//返回文件首，才可以进行下一步工作 
    //fgets(f,len+1,fg);
    //fscanf(fp,"%s",f);
    //for(i=0;i<len;i++)
      //f[i]=getc(fp);
    //fread(f,sizeof(s[0])*strlen(s),1,fp);
    for(i=0;i<strlen(s);i++)
	   fread(&f[i],sizeof(f[i]),1,fp);
	fclose(fp);
	puts(f);
	return 0;
}
