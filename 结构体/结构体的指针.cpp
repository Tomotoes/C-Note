#include "stdio.h"
struct Mj
{
	char name[10];
	char sex[10];
	char phone[10];
}LL,*p;
int main()
{
	int n,i,j;
    Mj LL={"majin","man","17555"};
    typedef int liulin;
    liulin a=3;
    printf("%d\n",a);
	p=&LL;
	printf("%d\n",a);
	printf("%s\n",LL.name);
	printf("%s\n",(*p).name);
	printf("%s\n",p->name);
	return 0;
}