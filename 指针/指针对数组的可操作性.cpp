#include <stdio.h>
int main(){
    int s[20];
    for(int i=0;i<6;++i)
        scanf("%d",s+i);//等价于 scanf("%d",&s[i]); 
    for(int i=0;i<6;++i)
        printf("%d ",*(s+i));//等价于 printf("%d ",s[i]); 
    return 0;
}
