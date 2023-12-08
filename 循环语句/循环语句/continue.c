#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main3()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch >'9')		//判断字符是否是0~9（其实就是判断这个字符的Ascii值是否在0和9的ASCII值之间
			continue;					//continue跳过不想要的循环
		putchar(ch);
	}
	//只打印数字字符
	//输入多个数字的话就是先存到缓冲区，再一个一个打印出来
	// 当然最后还是有一个 \n 的
	//要是输入如 asdas3132asaf 就是自动屏蔽字母，只打印数字

	return 0;
}