#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main1()
{
	//判断一个数是否为奇数
	int num1 = 1;
	printf("请输入一个数：");
	scanf("%d", &num1);			//输入数字

	int m = num1 % 2;
	int a = 1 % 2;
	if (1)
	{
		if (0 == m)
		{
			printf("这个数是偶数\n");
		}
		else if (1 == m)
		{
			printf("这个数是个奇数\n");
		}
	}
	/*else if (1 == num1)
	{
		printf("这个数是个奇数\n");
	}
	else  
	{
		printf("这个数是个O数\n");
	}*/
	return 0;
}