#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int s[10000],n,i;
int cmp(const void *a,const void *b)
{
	return (*(int *)a-*(int *)b);
}
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	qsort(s,n,sizeof(s[0]),cmp);//1.Ҫ�õ���stdlib.h ��ͷ��������string.h���� 
                               // 2.qsort��a.b.c.d��
							   // ��a �������������ƣ�Ҳ�Ǿ�������׵�ַ��
							            �������е�ַ���ݡ�
	                          // ��b ":	������������Ԫ�ظ������ܺ͡�
							  // ��c ����������Ԫ����ռ�ռ���ֽ�����
							  // ��d ������qsort��������ꡣ-���Զ���)�ȽϺ����� 
							            �����͵ıȽϲ�һ�¡� 
							  	 
	for(i=0;i<n;i++)
	{
		printf("%d ",s[i]);
	}
	return 0;
}