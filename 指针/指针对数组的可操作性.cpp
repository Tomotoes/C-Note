#include <stdio.h>
int main(){
    int s[20];
    for(int i=0;i<6;++i)
        scanf("%d",s+i);//�ȼ��� scanf("%d",&s[i]); 
    for(int i=0;i<6;++i)
        printf("%d ",*(s+i));//�ȼ��� printf("%d ",s[i]); 
    return 0;
}
