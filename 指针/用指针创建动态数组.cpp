//��ָ�� ������̬���� 
#include <stdio.h>
#include <stdlib.h>
int *p;
int main(){
	int len;
	printf("���������鳤�ȣ�");
	scanf("%d",&len);
	p=(int*)malloc(sizeof(int)*len);
	for(int i=1;i<=len;i++){
		printf("�������%d��Ԫ�ص�ֵ��",i);
		scanf("%d",&p[i]);
	}
    for(int i=1;i<=len;i++)
        printf("%d ",p[i]);
	return 0;
}
//�ýṹ��ָ�봴����̬���� 
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
	printf("���������鳤�ȣ�");
	scanf("%d",&len);
	T.p=(int *)malloc(sizeof(int)*len);
	for(int i=1;i<=len;i++){
		printf("�������%d��Ԫ�ص�ֵ��",i);
		scanf("%d",&T.p[i]);
	}
    for(int i=1;i<=len;i++)
        printf("%d ",T.p[i]);
	return 0;
} 
