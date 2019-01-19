#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int s[10000],n,i;
int cmp(const void *a,const void *b)
{
	return (*(int *)a-*(int *)b);
}
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	qsort(s,n,sizeof(s[0]),cmp);//1.要用到“stdlib.h ”头函数，“string.h”。 
                               // 2.qsort（a.b.c.d）
							   // “a ”：是数组名称，也是就数组的首地址。
							            参数进行地址传递。
	                          // “b ":	是数组中所有元素个数的总和。
							  // ”c “：是数组元素所占空间的字节数。
							  // ”d “：是qsort函数的灵魂。-（自定义)比较函数。 
							            各类型的比较不一致。 
							  	 
	for(i=0;i<n;i++)
	{
		printf("%d ",s[i]);
	}
	return 0;
}