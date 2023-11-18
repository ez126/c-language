#define _CRT_SECURE_NO WARNINGS//这个一定要是在第一行，才能scanf
#include<stdio.h>
#include<string.h>

int main3()
{
	
	//1@0 - int
//#qWer$
//char 字符类型
//'a';
//char ch ='w';
//字符串
//语言中有没有字符串类型呢?没有
// 
// 
//"abcdef" 这个就是字符串用双引号
//要是想保存一串字符，那么就是定义一个字符数组
	char arr1[] = "abcde"; //数组中有6个数据，自带一个  \0
	char arr2[] = { 'a','b','c','d','e','f','\0'};//这里在数组最后要加个  

	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = strlen(arr1);//正常理解下的长度 不带  \0
	int len3 = strlen(arr2);//strlen是直接求字符串长度的函数  string length
	//   \0  表示字符串结束，否则在输出的时候，会一直输出到内存空间中有 \0 的位置
	printf("\n");
	printf("arr1为：%s", arr1);
	printf("\n");
	printf("arr2为：%s\n", arr2);
	printf("arr1数组的长度为：%d\n",len1);
	printf("arr1数组的真正长度为：%d\n", len2);
	printf("arr2数组的长度为：%d\n", len3);
	

		
	return 0;
}