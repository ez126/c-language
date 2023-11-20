#include<stdio.h>

//// define定义标识符常量
//#define NUM 100
//
//
//
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//
//	return 0;
//}



// #define定义宏
//宏是有有参数的
#define ADD(x,y) ((x)+(y))
//    宏名  （宏的参数（参数是无类型的））   （宏体）

int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	printf("%d\n", c);
	return 0;
}