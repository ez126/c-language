#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.不可在for 循环体内修改循环变量，防止for 循环失去控制
//2建议for语句的循环控制变量的取值采用“前闭后开区间”写法（就是' i < ' 最好是别'i <= ' ）

int main4()
{
	//初始化判断部分 ； 判断语句部分；调整部分
	for ( int i = 0; i < 10; i++)
		//中间是分号
	{
		if (5 == i)
			//break;	//终止
			continue;   //跳过5
		printf("%d", i);
	}

	// for 循环的 ‘判断部分’ 省略意味这判断会恒成立

	for (;;)
	{
		printf("hehe\n");   //会一直打印hehe
	}

	//
	int i = 0;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
		{
			printf("666\n");		//只打印三个 666
		}
	}
	// 在第一层内部循环结束的时候 j 已经是3了，进入第二层循环的时候 j 的值不会初始化，还是3  所以循环直接结束



	return 0;
}