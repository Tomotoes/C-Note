#include "stdio.h"
#include "stdlib.h"
int main()
{
	FILE *fp1;
	int i;
	struct stu
{
 char name[15];
 char num[6];
 float score[2];	
}student;
	if((fp1=fopen("d://text4.txt","wb"))==NULL)
	{
		printf("Cannot open file!\n");
		exit(0);
	}
	printf("Input data:\n");
	for(i=0;i<2;i++)
	{
		scanf("%s%s%f%f",student.name,student.num,&student.score[0],&student.score[1]);
		fwrite(&student,sizeof(student),1,fp1);
	}
	fclose(fp1);
	if((fp1=fopen("d://text4.txt","rb"))==NULL)
	{
		printf("Cannot open file!\n");
		exit(0);
	}
	printf("Output from file:\n");
	for(i=0;i<2;i++)
	{
		fread(&student,sizeof(student),1,fp1);
		printf("%s %s%7.2f%7.2f\n",student.name,student.num,student.score[0],student.score[1]);
	}
	fclose(fp1);
	return 0;
}