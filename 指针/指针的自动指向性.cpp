#include <stdio.h> 
int *text(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    return a;
}
void st(){
    int b[10]={11,12,13,14,15,16,17,18,19,20};
}
int main()
{
  int *p;
  p = text();//指针p指向 数组a的地址 
  
  printf("%d\n",*(p+8));// 输出结果：a[8] 
  printf("%d\n",(p+8));// 输出 
  
  
  st();
  
  printf("%d\n",*(p+8));// 输出结果：b[8]
  printf("%d\n",*(p+8));
  return 0;
}

