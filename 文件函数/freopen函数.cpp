//First declare the time : 2017��2��17��11:20:33
//�ղŷ����˼��£���Ⱥ�ܣ����ܴ������������Щʲô����ǿ��̸�����ס�
//��� �������ļ������� freopen 

//freopen��----��stdin���� 
#include <stdio.h> 
int main(){//������D�� in�ı��� �ź����ݣ����磺1 2 3 4 . 
    int a,b;
    freopen("D:\\in.txt","r",stdin);//��ȡ D�� in�ı��е����� ��һ�ζ�ȡ��1 2 ���ڶ��ζ�ȡ��3 4�� 
    while(scanf("%d%d",&a,&b)!=EOF)//����˵ Ӧ���ɼ����������� �� freopen�� ��ȡ�������� ��Ϊ ��������
//Ҳ����˵ freopen��...stdin�������벽��ʡȥ�ˣ�
//�������ACMʱ �������ݲ��÷���ճ�� ֻ���ڸ��ĵ� ����������ݡ����ɷ������� �� 
        printf("%d\n",a+b); //���������� �����磺3 7 
    return 0;
}

//freopen��----��stdout���� 
#include <stdio.h>
int main(){//��stdout �� stdin �෴��
           //stdin��ʡȥ���룬�Ѷ�ȡ�����ĵ����� ��Ϊ�������ݡ�
           //stdout�������ڿ���̨��������ǰ���������� �������½����ĵ��� �� 
    int i;
    freopen("D:\\out.txt","w",stdout);
    printf("�Ұ�����\n");//���к󣬿���̨��������� 
    fclose(stdout);// D�̵�out�ĵ��� ������ ���Ұ����ա����ݡ� 
    return 0;
} 

//�ۺ����ӣ�in�ĵ��� ���棺1 2�� 
#include <stdio.h>
int main() {
	int a, b;
	freopen("D:\\in.txt", "r", stdin); 
	freopen("D:\\out.txt", "w", stdout);
	while (scanf("%d %d", &a, &b) != EOF)//��in�ĵ��е�1 2��ȡ����
    //�������Ϊ3��������freopen-stdout�����Կ���̨��һ����������� ȫ�������� stdout���ĵ�·���� 
	printf("%d\n", a + b);//���к󣬲����ڿ���̨��������ǰ��������3 ������out�ĵ��� 
	fclose(stdin);
	fclose(stdout);
	return 0;
}

//��ס������룬���� ���������ı����Ժ���ܸ���������ڲ�������Ȼ˵���Լ����� һ��ûAC���� 
#include <stdio.h>
int main(){
    int n,m;
    freopen("C:\\Users\\ASUS\\Desktop\\Input.txt","r",stdin);
    freopen("C:\\Users\\ASUS\\Desktop\\Output.txt","w",stdout);
    while(~scanf("%d %d",&n,&m)){
        printf("%d\n",n+m);
    }
    return 0;
} 

