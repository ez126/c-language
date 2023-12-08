#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>		//要用sleep这个函数就是要加这个头文件
#include<stdlib.h>		//用system的头文件

int main23()
{
	char str1[] = "welcome to wlord!!!";				//输入数组
	char str2[] = "###################";

	int len = strlen(str2);
	int left = 0;										//左右下标
	int right = sizeof(str1) / sizeof(str1[0]) - 2;
	//int right = strlen(str2) - 1;
	
	while (left <= right)
	{
		str2[left] = str1[left];						//进行字符替换
		str2[right] = str1[right];
		/*for (int i = 0; i < len; i++)					//法1
		{
			printf("%c", str2[i]);
		}*/
		printf("%s", str2);								//法2  都是多行打印
		Sleep(500);									//相当于delay_ms(1000)
		
		//清空屏幕
		system("cls");								//执行Windows的cls指令，也就是在Windows的cmd中的清空屏幕		
		//system是一个库函数，可以执行系统命令
		//printf("\n");
		left++;
		right--;
	}
	printf("%s\n", str2);							//防止最后一次清理之后屏幕上什么都没有，所以再打印一遍

	printf("");
	return 0;
}