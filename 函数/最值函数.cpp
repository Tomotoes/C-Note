1.���� #include <algorithm> 

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

2.�ֶ��궨��

#include <stdio.h>
#define max(a,b) a>b?a:b    ---����ʹ�ã�һ��Ҫע�� �������ȼ���2017��1��25��13:13:24��A��Ľ�ѵ 
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m))
	   printf("%d\n",max(n,m));
	return 0;
}  

3.��˺����

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
