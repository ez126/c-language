#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main3()
{
	int age1 = 13;
	if (age1 > 18)//if()这个括号里面，只是判断真假，也就是0，1，为真就执行，为假就不执行
	{
		printf("成年\n");
		printf("不能饮酒\n");//这里如果if这个要执行多条语句，就要加个{}括起来；
	}
	else
	{
		printf("未成年\n");
	}
		
	//多分支的if语句

	int age = 10;
	printf("请输入年龄：");
	scanf("%d", &age);
	printf("年龄分段为：");
	if (age < 18)
		printf("青少年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 40)
		printf("中年\n");
	else if (age >= 40 && age < 60)
		printf("壮年\n");
	else if (age >= 60 && age <= 100)
		printf("老年\n");
	else
		printf("老寿星\n");


	int a = 0;
	int b = 2;
	if (a == 1)//首先就是判断为假就不会进行后续
		if (b == 2)
			printf("hehe\n");
		else//else是和其离得最近的if进行匹配
			printf("haha n");

	return 0;
}