#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



//1.电脑生成一个随机数（1~100）
//2.猜数字
//猜大了
//猜小了

void menu(void)										//生成菜单栏
{
	printf("**************************************\n");
	printf("***********     1.Play     ***********\n");
	printf("***********     0.Exit     ***********\n");
	printf("**************************************\n");
}

//0~RAND_MAX(32767)  就是生成rand数字的范围
void game()
{
	int guess = 0;
	//RAND_MAX;
	//1.生成随机数
	//任何数取模100 %100的值都是在 0~99
	//我们 +1 就是 1~100
	int ret = rand()%100+1;//生成随机数的函数
	printf("随机数是：%d\n", ret);		//显示这个随机数
	//2、猜数字
							
	while (1)
	{
		printf("请猜数字:>");			
		scanf("%d", &guess);			//输入数字
		system("cls");
		if (guess < ret)
		{
			printf("猜小了，再来一遍。\n");
		}
		else if (guess > ret)
		{
			printf("猜大了，再来一遍\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			Sleep(1000);
			system("cls");
			break;
		}
	}
}

//指针
//int *p = NULL;   #define NULL ((void *)0)
//int a = 0;
//
int main()
{
	int input = 0;
	//生成随机数就只要在主函数中调用一次 srand就行了
	srand((unsigned int)(time(NULL)));				//srand设置一个随机数起点，也就是一个随机数的种子
	//unsigned int将后面的强转成无符号整型
	//NULL是一个空指针
	do 
	{
		menu();										//进入菜单函数
		printf("请选择:>");
		scanf("%d", &input);						//选择 0或1
		system("cls");								//清屏
		switch (input)								//选择
		{
		case 1:
			printf("猜数字游戏\n");
			game();									//进入猜数字游戏的函数
			break;
		case 0:
			printf("886~~~~~~~~~~~~~~\n");
			Sleep(1000);
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);								//input只是 0 或者 1
	return 0;
}