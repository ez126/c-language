#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main4()
{
	printf("0~100的奇数有：");
	for (int i = 1; i <= 100; i++)
	{
		int Re = i % 2;			//取余
		if (1 == Re)			//判断
		{
			printf("%d ", i);	//输出
		}
	}
	printf("\n0~100的偶数有：");
	for (int i = 1; i <= 100; i++)
	{
		int Re = i % 2;
		if (0 == Re)
		{
			printf("%d ", i);
		}
	}
	
	
	return 0;
}