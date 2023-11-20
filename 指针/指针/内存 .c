//内存会会划分为一个个的内存单元
//一个内存单元的大小：1byte 一个字节
//每个内存单元都有一个编号 


#include<stdio.h>


int  main()
{
	
	int a = 10;//意味着向内存申请4个字节，存储10
	&a;//取址符

	printf("%p\n", &a);
	//但是如果是想要保存这个地址

	int* p = &a; // *说明p是指针变量  int 说明指向的对象是int类型的
	*p = 20;//解引用操作符,通过p的存放的地址来找到p所指的对象
	printf("%d\n", a);
	printf("%d\n", *p);
	//p就是指针变量

	//内存变量
	//编号-> 地址 -> 地址也被称为指针
	//所以把存放指针的（存放地址）的变量就叫做指针变量


	char ch = 'w';
	printf("%c\n", ch);

	char* pc = &ch;
	*pc = 'f';
	printf("%c\n", *pc);
	printf("%p\n", pc);


	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(float*));
	//不管是说明类型，创建的都是指针变量
	//指针变量是用来存放地址的
	//指针变量的大小取决于一个地址存放的时候需要多大空间
	//32位机器上的地址：32bit位-4 byte ，所以指针变量大小是4个字节
	//64位机器上的地址：64bit位-8 byte ，所以指针变量大小是8个字节







	return 0;
}