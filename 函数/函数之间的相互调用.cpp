// 函数之间的相互调用的关键：在每个函数中，把在其中的函数看成一条普通的语句。
// 执行完 在函数其中的函数后，还要返回其根源函数，执行下一条语句。 
#include <stdio.h>

void A()
{
	printf("A开始以及结束\n");
}

void B()
{
	printf("B开始\n");
	A();
	printf("B结束\n"); 
}

void C()
{
	printf("C开始\n");
	B();
	printf("C结束\n"); 
}

void D()
{
	printf("D开始\n");
	C();
	printf("D结束\n");
}

int main()
{
	printf("函数调用开始(由函数D开始):\n");
	D();
	printf("xxx");
	return 0;
} 
