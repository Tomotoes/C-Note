//First declare the time��2017��2��12��21:28:41 
//������ѧC#����ǰһֱû��ĥ��֪ʶ�������Ǽ�ʶ�ˡ�
//ԭ���ַ�������� �л��з� ��\n,\t... �ᱻϵͳʶ�𣬳�Ϊ������� ǰ����ת���ַ���
//���ң�����̽�������з�֮��ģ����ַ����л�ռһ���ַ����ȡ� 
#include <stdio.h>
#include <string.h>
int main(){
	char s[50]="ab d\nas\td \n\\n456";
	puts(s);
	char a[10]="asc\nasd";
	printf("len==%d,a[3]==%c\n",strlen(a),a[3]);
	printf("-----\n");
} 
