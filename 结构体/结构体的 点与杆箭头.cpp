定义的结构体如果是指针，访问成员时就用"->"
如果定义的是结构体变量，访问成员时就用"."

例如：
struct AAA {
    int a;
    char b;
};

struct AAA q; 访问成员就用：q.a;
struct AAA *p; 访问成员就用：p->a;
