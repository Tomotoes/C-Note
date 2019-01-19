//First declare the time：2017年2月12日21:28:41 
//今晚在学C#，以前一直没琢磨的知识，今天是见识了。
//原来字符串中如果 有换行符 像：\n,\t... 会被系统识别，成为命令，除非 前面有转义字符！
//并且，经过探索，换行符之类的，在字符串中会占一个字符长度。 
#include <stdio.h>
#include <string.h>
int main(){
	char s[50]="ab d\nas\td \n\\n456";
	puts(s);
	char a[10]="asc\nasd";
	printf("len==%d,a[3]==%c\n",strlen(a),a[3]);
	printf("-----\n");
} 
