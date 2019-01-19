#include "stdio.h"
#include "string.h"
struct Mj
{
	int a;
	char s[20];
	int b;
}liulin;
void f(struct Mj * majin);
void g(struct Mj);
int main()
{
	f(&liulin);
	g(liulin);
	return 0;
}
void f(struct Mj * majin)
{
	majin->a=5;
	strcpy(majin->s,"love");
    majin->b=2;
}
void g(struct Mj)
{
	printf("%d   %s   %d\n",liulin.a,liulin.s,liulin.b);
}