 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>		//要用sleep这个函数就是要加这个头文件
#include<stdlib.h>		//用system的头文件
#include<string.h>		//用是strcmp的头文件
//.编写代码实现，模拟用户登录情景，并且只能登录三次.(只允许输入三次密码，如果密码正确则)
//提示登录成，如果三次均输入错误，则退出程序

int main88()
{
	int i = 0;
	char password[20] = { 0 };
	//假设密码是字符串:abcdef
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		//if (password == "abcdef")						//比较两个字符串是否相等，不能使用==，而应该使用一个库函数:strcmp
		if(strcmp(password,"abcdef") == 0)				//如果返回值是0，表示2个字符串相等
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输出\n");			//重新输入
		}
		Sleep(500);										//停留500ms
		system("cls");									//清空屏幕
	}
	if (3 == i)
	{
		printf("三十秒后再次输入\n");
	}
	
	return 0;
}