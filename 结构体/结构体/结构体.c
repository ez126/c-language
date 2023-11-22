#include<stdio.h>
//char
//short
//int
//long
//float
//double
//人 : 名字 + 年龄 + 性别 + 地址 + 电话
//书 : 书名 + 作者 + 出版社 + 定价 + 书号
//复杂对象
//C语言就给了自定义类型的能力
//自定义类型中有一种叫 : 结构体
// struct
//结构体是把一些单一类型组合在一起

struct Student
{
	//结构体的成员
	char name[20];// 在c语言中没有字符串类型string，要想表示一个字符串就是用一个字符型的数组；
	int age;
	char sex[10];

};

void print(struct Student* p1)//因为是打印，所以不需要返回
{
	// ->
	// 结构体指针变量 -> 成员名
	printf("指针取地址打印:\t\t%s %d %s  \n", p1->name, p1->age, p1->sex);
	//也可以是（*p1）.name这样的，先解引用，然后再找
	printf("方法二指针取地址打印 %s %d %s \n", (*p1).name, (*p1).age, (*p1).sex);
}

int main()
{
	struct Student stu1 =
	{
		"陈陈陈",
		18,
		"男"
	};
	//注意这个 .
	printf("学生1的信息：%s %d %s\n", stu1.name ,stu1.age ,stu1.sex);
	print(&stu1);
	return 0;
}