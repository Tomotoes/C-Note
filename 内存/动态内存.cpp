在很久之前，老师曾教过 我们使用malloc申请内存的方法

今天在学习二叉树的时候，突然看见了 使用new的办法

struct Tree * Node = new Tree ；

等价于：

struct Tree * Node = (struct Tree *)malloc(sizeof(struct Tree));

刚才上网 搜下，new 和 malloc 的区别，
http://www.cnblogs.com/huhuuu/archive/2013/11/19/3432371.html
http://www.linuxidc.com/Linux/2016-01/127591.htm