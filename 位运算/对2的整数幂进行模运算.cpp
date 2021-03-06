/*
整数 n 对 2的整数幂 的模运算
------------------------------------------------------------------------------------------------------ 
左移运算符 “<<”
表达式：a << b
a<<b 的值是：将a各二进位全部左移b位后得到的值。左移时，高位丢弃，低位补0。

实际上，左移1位，就等于是乘以2，左移n位，就等于是乘以2n。而左移操作比乘法操作快得多。

例如:9 << 4
9的二进制形式：0000 0000 0000 0000 0000 0000 0000 1001
因此，表达式“9<<4”的值，就是将上面的二进制数左移4位，得：
0000 0000 0000 0000 0000 0000 1001 0000
即为十进制的144 , 而 9*2的4次幂 = 9*16 = 144.
------------------------------------------------------------------------------------------------------
右移运算符 “>>”
表达式：a >> b

a>>b的值是：将a各二进位全部右移b位后得到的值。右移时，移出最右边的位就被丢弃。

对于有符号数，如long,int,short,char类型变量，在右移时，符号位（即最高位）将一起移动，
并且大多数C/C++编译器规定，如果原符号位为1，则右移时高位就补充1，原符号位为0，则右移时高位就补充0。

实际上，右移n位，就相当于左操作数除以2n，并且将结果往小里取整。
例如：-25 >> 4 = -2   -2 >> 4 = -1   18 >> 4 = 1
------------------------------------------------------------------------------------------------------ 
并且要记住的是：整数的二进制进行位移运算，刚开始是：8组4位数，从低位开始，剩下的前位 全为0 
 
*/ 
#include <stdio.h>
int main(){
    int n,k;
    while(~scanf("%d %d",&n,&k)){
        n<<=k;//相当于 n 乘以 2的 k次幂，并将结果赋给n 
        
        n>>=k;//相当于 n除以 2的 k次幂，并将结果赋给n 
        
        printf("%d\n",n);
    }
    return 0; 
} 
