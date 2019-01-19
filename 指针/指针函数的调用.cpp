#include "stdio.h"
void MJ(int *x,int *y)
{
	int t;
	if(*x>*y)
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	MJ(&a,&b);
	printf("%d %d\n",a,b);
	return 0;
}