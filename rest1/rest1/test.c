#define _CRT_SECURE_NO WARNINGS//这个一定要是在第一行，才能scanf
#include<stdio.h>


//int main()
//{
//	int a = 10;
//	printf("%d",a);
//
//
//	return 0;
//}

//变量的作用域
//1.局部变量
// 局部变量的作用域是变量所在的局部范围
//
//2. 全局变量
// 全局变量作用域整个工程
// 
//变量生命周期
//局部变量的生命周期是从进入局部区域到出局部区域
//全局变量的生命周期是整个程序


int a = 10;//在main外面定义的函数就是全局变量

int main1()
{
	int a = 10;//在main函数里面就是局部变量
	{
		printf("a=%d\n",a);
	}
	printf("a=%d\n",a);
	return 0;
}
