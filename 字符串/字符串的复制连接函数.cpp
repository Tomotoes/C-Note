#include <stdio.h>
#include <string.h>
int main(){
    char a[]="abcdef";
    char b[]="ghijkl";
    strcat(a,a); 
    strcat(a,b);// ���Ӻ��� ���Ѻ�����ַ��� ���� ��ԭ�����ַ��� ���� 
    //strcpy(a,b); ���ƺ��� ����ԭ�����ַ��� ��ȫ�滻�� �������ַ��� 
    puts(a); 
    return 0;
} 
