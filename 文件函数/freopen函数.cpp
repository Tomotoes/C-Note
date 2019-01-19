//First declare the time : 2017年2月17日11:20:33
//刚才发生了件事，被群拒，饱受打击，可我能做些什么，变强又谈何容易。
//这次 来讲个文件函数： freopen 

//freopen（----，stdin）； 
#include <stdio.h> 
int main(){//首先在D盘 in文本中 放好数据：例如：1 2 3 4 . 
    int a,b;
    freopen("D:\\in.txt","r",stdin);//读取 D盘 in文本中的数据 第一次读取：1 2 ；第二次读取：3 4； 
    while(scanf("%d%d",&a,&b)!=EOF)//按理说 应该由键盘输入数据 但 freopen把 读取出的数据 作为 输入数据
//也就是说 freopen（...stdin）把输入步骤省去了！
//这便于做ACM时 测试数据不用反复粘贴 只需在该文档 保存测试数据。即可反复测试 ！ 
        printf("%d\n",a+b); //所以输出结果 ：例如：3 7 
    return 0;
}

//freopen（----，stdout）； 
#include <stdio.h>
int main(){//此stdout 与 stdin 相反。
           //stdin：省去输入，把读取出的文档数据 作为输入数据。
           //stdout：不会在控制台输出，而是把输出的数据 保存在新建的文档中 。 
    int i;
    freopen("D:\\out.txt","w",stdout);
    printf("我爱刘琳\n");//运行后，控制台无输出数据 
    fclose(stdout);// D盘的out文档中 保存着 ”我爱刘琳“数据。 
    return 0;
} 

//综合例子：in文档中 保存：1 2； 
#include <stdio.h>
int main() {
	int a, b;
	freopen("D:\\in.txt", "r", stdin); 
	freopen("D:\\out.txt", "w", stdout);
	while (scanf("%d %d", &a, &b) != EOF)//把in文档中的1 2读取出来
    //输出数据为3，但存在freopen-stdout，所以控制台把一切输出的数据 全部保存在 stdout的文档路径中 
	printf("%d\n", a + b);//运行后，不会在控制台输出，而是把输出数据3 保存在out文档中 
	fclose(stdin);
	fclose(stdout);
	return 0;
}

//记住这个代码，这是 桌面两个文本，以后就能更方便的利于操作，虽然说，自己今天 一题没AC。。 
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

