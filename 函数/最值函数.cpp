1.利用 #include <algorithm> 

#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m))
	   printf("%d\n",max(n,m));
	return 0;
} 

2.手动宏定义

#include <stdio.h>
#define max(a,b) a>b?a:b    ---谨慎使用，一定要注意 符号优先级，2017年1月25日13:13:24，A题的教训 
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m))
	   printf("%d\n",max(n,m));
	return 0;
}  

3.手撕函数

#include <stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int main() 
{
	int n,m;
	while(scanf("%d%d",&n,&m))
	   printf("%d\n",max(n,m));
	return 0;
}
