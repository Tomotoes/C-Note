#include <stdio.h>
void sort(int s[], int);
int main()
{
	int s[5] = { 56,12,7,36,4 };
	sort(s, 5);
	for (int i = 0;i < 5;i++)
		printf("%d ", s[i]);
	printf("\n");
	return 0;
}
void sort(int s[], int val)
{
	for (int i = 5;i >=0;i--)
	{
		for (int j = 0;j < i-1;j++)
		{
			if (s[j] > s[j+1])
			{
				int temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
}

 
//�������һ�����������������Զ�ת��Ϊָ�����ͣ��������ʵ���ǵ�ַ��

void func(int array[10])
void func(int array[])
void func(int *array)

//�����������ֺ���������ȫ��ͬ��

