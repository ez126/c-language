#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main2()
{

	//举个例子
	//假设密码是一个字符串
	char password[20] = { 0 };			//定义密码的字符串
	printf("请输入密码：");

	//scanf("%s", password);			//password是一个数组名，就是一个地址，所以就没有取地址
	gets(password);						//在我们输入一个数组的最后 按enter的时候会自带一个 \n 如：(abcd\n)
										// scanf只是把前面的字符读取写入了，但是留了一个\n在数据缓冲区
										// 所以后面getchar()就会直接把 \n 赋给 ret
										// 所以就不会让你再输入一个字符，就直接运行后续的代码
										// 如果是想输入一整行包括空格的就用 gets(password);
										


	getchar();							//1、更改方法1：让一个getchar先去拿走缓冲区的 \n 就可以顺利进行后续了  
	getchar();							//但是，如果我输入的密码中间有个空格 如：asda asd
	//后一个是为了						// 这个时候scanf就只读到空格就停止，只会把空格之前的内容给password
	//将前面一个留下的\n给拿走			// 这时候显然一个gerchar就不够用了
	//这样此时输入缓冲区里面就没有东西了
	//这样下面就不会是先是从 ch的ASCii 从10（\n）开始，就会直接让你先输入了
										
	int ch = 0;
	while ((ch = getchar()) != '\n')	//2、方法二：利用getchar将缓冲区清空
	{									//将缓冲区里的东西都先拿走
		;
	}
	printf("输入的密码是：%s\n", password);
	printf("请确认密码(Y/N):>");
	int ret = getchar();				//判断

	if ('Y' == ret)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}