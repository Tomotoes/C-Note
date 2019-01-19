#include <stdio.h>
#include <string.h>
int main(){
    char a[]="abcdef";
    char b[]="ghijkl";
    strcat(a,a); 
    strcat(a,b);// 连接函数 ，把后面的字符串 连接 在原来的字符串 后面 
    //strcpy(a,b); 复制函数 ，把原来的字符串 完全替换成 后来的字符串 
    puts(a); 
    return 0;
} 
