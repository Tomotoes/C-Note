#include <stdio.h>
#include <string.h>
int main(){//�ַ������� ���ó�ʼ����������ʼΪ ����ֵ 
    char a[45]="asda4";
    memset(a,'x',sizeof(a));
    puts(a);
    return 0;
}
