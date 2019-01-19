#include<bits/stdc++.h>
using namespace std;
#define For(i,n) for(int(i)=0;(i)<(int)(n);++(i))
#define J(i) (int)(i)++ 
int main(){
    int n;
    scanf("%d",&n);
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    For(i,n){
        J(A[i]);
        printf("%d ",A[i]);
    }
    return 0;
} 
