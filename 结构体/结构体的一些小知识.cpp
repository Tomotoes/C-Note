//相当于一个一维数组 
#include <stdio.h>
#define maxn 1000
struct Mj
{
	int i;
	char s;
	double g;
}stu[maxn];
int main(void)
{
	int i;
	for(i=0;i<5;i++)
	  scanf("%lf",&stu[i].g);
	for(i=0;i<5;i++)
	  printf("%.lf ",stu[i].g);
	printf("\n");  
	return 0;
} 
//相当于一个一维数组 
#include <stdio.h>
#define maxn 1000
struct Mj
{
	int i[maxn];
	char s[maxn];
	double g[maxn];
}stu;
int main(void)
{
	int i;
	for(i=0;i<5;i++)
	  scanf("%lf",&stu.g[i]);
	for(i=0;i<5;i++)
	  printf("%.lf ",stu.g[i]);
	printf("\n");  
	return 0;
} 
//相当于一个二维数组 
#include <stdio.h>
#define maxn 1000
struct Mj
{
	int i[maxn];
	char s[maxn];
	double g[maxn];
}stu[maxn];
int main(void)
{
	int i,j;
	for(i=0;i<2;i++)
	  for(j=0;j<2;j++)
	    scanf("%lf",&stu[i].g[j]);
	for(i=0;i<2;i++)
	  for(j=0;j<2;j++)
	    printf("%.lf ",stu[i].g[j]);
	  printf("\n");  
	printf("%.lf\n",stu[1].g[0]);
	return 0;
} 
//相当于二维数组时，不可以分成一维数组，
//结果全为 0 
#include <stdio.h>
#define maxn 1000
struct Mj
{
	int i[maxn];
	char s[maxn];
	double g[maxn];
}stu[maxn];
int main(void)
{
	int i,j;
	for(i=0;i<2;i++)
	  scanf("%lf",&stu[i].g);
	for(i=0;i<2;i++)
      printf("%.lf ",stu[i].g); 
	return 0;
} 
//相当于二维数组时，不可以分成一维数组，
//运行错误 
#include <stdio.h>
#define maxn 1000
struct Mj
{
	int i[maxn];
	char s[maxn];
	double g[maxn];
}stu[maxn];
int main(void)
{
	int i,j;
	for(i=0;i<2;i++)
	    scanf("%lf",&stu.g[j]);
	for(i=0;i<2;i++)
	    printf("%.lf ",stu.g[j]);  
	return 0;
} 
