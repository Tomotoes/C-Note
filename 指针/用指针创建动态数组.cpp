//用指针 创建动态数组 
#include <stdio.h>
#include <stdlib.h>
int *p;
int main(){
	int len;
	printf("请输入数组长度：");
	scanf("%d",&len);
	p=(int*)malloc(sizeof(int)*len);
	for(int i=1;i<=len;i++){
		printf("请输入第%d个元素的值：",i);
		scanf("%d",&p[i]);
	}
    for(int i=1;i<=len;i++)
        printf("%d ",p[i]);
	return 0;
}
//用结构体指针创建动态数组 
#include <stdio.h>
#include <stdlib.h>
struct MJ
{
	int *p;
	int base;
	int top;
};
int main(){
	MJ T;
	int len;
	printf("请输入数组长度：");
	scanf("%d",&len);
	T.p=(int *)malloc(sizeof(int)*len);
	for(int i=1;i<=len;i++){
		printf("请输入第%d个元素的值：",i);
		scanf("%d",&T.p[i]);
	}
    for(int i=1;i<=len;i++)
        printf("%d ",T.p[i]);
	return 0;
} 
