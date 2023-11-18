#include<stdio.h>
#define _CRT_SECURE_NO WARNINGS

//static是用来修饰变量和函数的
//静态是用来修饰变量和函数的
// 
//1.修饰局部变量 - 称为静态局部变量
//⒉修饰全局变量 - 称为静态全局变量
//3.修饰函数 - 称为静态函数


//void test()
//{
//	static int a = 1;
//	//1、static 修饰局部变量的时候，局部变量出了作用域，不销毁的。
//	//本质上static修饰局部变量的时候，改变了变量的存储位置
//	//使局部变量有栈区，转到了静态区
//	//影响了变量的生命周期，使其和程序的生命周期一样长，也就是程序结束这个变量才销毁
//	//整个过程 a 的地址都是没有发生变化 只是值发生了变化
//	a++;
//	printf("%d ", a);
//}//不加static,a的生命周期是进入它的周期创建，出这个周期就销毁
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}//不加static， 结果是十个2
//
//
//	return 0;
//}



////2、修饰全局变量
//
////声明外部符号
//extern int g_val;
////声明一下后面就可以调用
//extern int g_val2;
////声明一下后面也不可以调用
//
//int main()
//{
//	printf("%d\n", g_val);// 结果是2023
//	printf("%d\n", g_val2);//加了static就使用调用不了了
//	return 0;
//}


// static 修饰函数

//int Add(int x,int y)//这里前面就不能加void，这里返回的是一个int型
//{
//	return x + y;
//}

extern int Add(int x, int y);//这个就是再次调用
extern int Add1(int x, int y);//这个就是调用不了

int main()
{
	int a = 1;
	int b = 4;

	int z = Add(a, b);
	int z1 = Add1(a, b);

	printf("%d\n", z);
	printf("%d\n", z1);//出错
	
	return 0;
}