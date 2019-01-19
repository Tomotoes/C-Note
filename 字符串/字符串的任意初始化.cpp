#include <stdio.h>
#include <string.h>
int main(){//字符串可以 利用初始化函数，初始为 任意值 
    char a[45]="asda4";
    memset(a,'x',sizeof(a));
    puts(a);
    return 0;
}
