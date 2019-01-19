/*
sscanf与scanf类似，都是用于输入的，只是后者以键盘(stdin)为输入源，前者以固定字符串为输入源。
第二个参数可以是一个或多个 {%[*] [width] [{h | I | I64 | L}]type | ' ' | '\t' | '\n' | 非%符号}
注：
1、 * 亦可用于格式中, (即 %*d 和 %*s) 加了星号 (*) 表示跳过此数据不读入. (也就是不把此数据读入参数中)
2、{a|b|c}表示a,b,c中选一，[d],表示可以有d也可以没有d。
3、width表示读取宽度。
4、{h | l | I64 | L}:参数的size,通常h表示单字节size，I表示2字节 size,L表示4字节size(double例外),l64表示8字节size。
5、type :这就很多了，就是%s,%d之类。
6、特别的：%*[width] [{h | l | I64 | L}]type 表示满足该条件的被过滤掉，不会向目标参数中写入值
失败返回0 ，否则返回格式化的参数个数
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[50];
    sscanf("123456","%4s",A);
    puts(A);
    return 0;
} 
