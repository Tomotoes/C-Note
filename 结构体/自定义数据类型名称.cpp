#include "stdio.h"
int main()
{
    typedef int liulin;
    liulin a=3;//等价于 int a = 3; 
    typedef char majin;
    majin b='P';//等价于 char b = 'P'; 
	printf("%d   %d\n",a,sizeof(liulin));
	printf("%c   %d\n",b,sizeof(majin));
	return 0;
}
