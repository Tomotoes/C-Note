//1). 把字符串 s[1] 的首地址 赋给 p （ p = s[1]; ) ,然后输出的便是 s[1] 字符串内容。 
//    所以说 char *p 的实际作用 等价于 一个字符串 ，并且 可怕的是 可以直接 p = s[1];  
//    因为 p 保存的是字符串的首地址，即 *p 指向这个字符串的地址。
//    千万不要忘了，字符串即字符数组，而 数组名代表的是 该数组的首地址。 
#include <stdio.h>
int main(){
    char s[3][10];
    for(int i=0;i<3;++i)
        scanf("%s",s[i]);
    char *p;
    p=s[1];
    puts(p);
    return 0;
} 

//2). 要注意的是 *p[10] 的实际含义 等价于 一个二维字符数组！ p[1] 便是一个字符串！p[1][1]才是字符！ 
//               p[1] = s[1]; 
#include <stdio.h>
int main(){
    char s[3][10];
    for(int i=0;i<3;++i)
        scanf("%s",s[i]);
    char *p[10];
    p[1]=s[1];
    puts(p[1]);
    //putchar(p[1][1]);
    return 0;
}

//3). 先定义一个 指针常量 *s，s指向 一个字符串 “abcdef”。
//    然后 定义一个 p = s； 等价于 p 也指向 这个字符串“abcdef ”.
//    并且 要注意的是 p 保存的是 该字符串的 首地址 
//    如果定义 char *p = s; 含义便是 ，指针p 指向 s ，s指向 字符串  
//    p[n] 等价于 *(p+n) 
#include <stdio.h>
int main(){
    char *s="abcdef";
    char *p=NULL;
    p=s;                //下面 两个 for 循环 实际作用相等 
    /*for(;*p!='\0';p++)
        printf("%c",*p);*/
    for(int i=0;p[i]!='\0';i++)
        printf("%c",p[i]);
    //printf("%s\n",p);
    printf("\n");
    return 0;
}

