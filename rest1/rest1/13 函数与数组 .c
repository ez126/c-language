#define _CRT_SECURE_NO_WARNINGS//这个一定要是在第一行，才能scanf
#include<stdio.h>
#include<string.h>


//int sum( int num1,int num2)
//{
//	int sum = 0;
//	sum = num1 + num2;
//	return sum;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//输入
//	scanf("%d %d", &a, &b);
//
//	int z=sum(a, b);
//
//	//打印结果
//	printf("%d\n", z);
//	return 0;
//}

//编辑取比较最大值的函数Max
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main6()
{
	int arr1[] = { 1,2,23,4,5,65,2 };//x下标也是从0开始的
	for (int i = 0; i < 7; i++)
	{
		printf("%d\n", arr1[i]);
	}

	char ch[4] = "acv";
	
	
	//求两个数的最大值
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = Max(a, b);
	printf("%d", m);
	return 0;
}

