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
	scanf("%s",s);//������������ո�Ļ������Բ�Ӱ��洢 
	for(i=0;i<strlen(s);i++)
	   fwrite(&s[i],sizeof(s[i]),1,fp);
	//fwrite(s,sizeof(s[0])*strlen(s),1,fp);//һ��ȫ����ȡ 
	//for(i=0;i<strlen(s);i++)
	  //fputc(s[i],fp);
	//fputs(s,fp);
	//fprintf(fp,"%s",s);
	//�ո�治��ȥ�������ո��ֹͣ�洢��������������������ķ��Ŵ���ո񰡣�����!) 
    fseek(fp,0,SEEK_SET);//�� 
    fseek(fp,0,SEEK_END);//�ļ� 
	long len=ftell(fp);  //�� 
	printf("%ld\n",len);//�� 
	fseek(fp,0,SEEK_SET);//�����ļ��ף��ſ��Խ�����һ������ 
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
