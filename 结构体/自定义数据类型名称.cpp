#include "stdio.h"
int main()
{
    typedef int liulin;
    liulin a=3;//�ȼ��� int a = 3; 
    typedef char majin;
    majin b='P';//�ȼ��� char b = 'P'; 
	printf("%d   %d\n",a,sizeof(liulin));
	printf("%c   %d\n",b,sizeof(majin));
	return 0;
}
