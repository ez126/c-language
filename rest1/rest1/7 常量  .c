#define _CRT_SECURE_NO WARNINGS//这个一定要是在第一行，才能scanf
#include<stdio.h>





enum Color
	//枚举常量
{
	RED,
	GREEN,
	BLUE
};
int main2()
{
//1.字面常量
//2.const修饰的常变量
//3、define定义的标识符常量
//4、枚举常量

		//38;
		//3.14;
		//w';//字符
		//"abc";//这些个都是常量
	//const  int a = 10; //在c语言中，const修饰的a，本质是变量，
	////但是不能被修改，有常量的属性
	//a = 20;
	//printf("%d\n", a);//20 
	
	//const int n = 10;
	//int arr[n] = (0);//这里定义数组的时候n就是要用常量的

	//三原色
	//Red Green Blue
	enum Color c = RED;//c的类型是这个color函数
	

	return 0;
}