#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//n的阶乘  1*2*3*、、、*n

int main7()
{
	int n = 0;
	int mutiply = 1;
	printf("输入一个数：");
	scanf("%d", &n);
	for (int i = 1; i <= n ; i++)
	{
		 mutiply =mutiply *i;
	}
	printf("%d的阶乘为：%d\n", n,mutiply);

//计算 1！+ 2！+ 3！+。。。+ 10！
	
	int sum = 0;
	int ret = 1;
	for (int j = 1; j <= 10; j++)
	{
		ret = 1;
		for (int i = 1; i <= j; i++)			//计算阶乘
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("阶乘相加之后的和为：%d\n", sum);

	//优化算法
	 sum = 0;								//重置数据
	 ret = 1;
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("优化算法后的结果为：%d", sum);


	return 0;
}