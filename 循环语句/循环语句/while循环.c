#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main1()
{
	int i = 0;
	// while(表达语句)，为真 就往下执行
	//		执行语句
	//while ( i < 10)// 打印 1 ~ 10
	//{
	//	i++;

	//	if (5 == i)
	//	{
	//		//break;//直接跳出while循环，终止整个循环
	//		continue;//跳过后续的循环重新开始
	//	}

	//	printf("%d\n", i);

	//}

	printf("\n");
	printf("getchar类型\n");
	printf("请输入一个字符：");

	int ch = getchar();			//从键盘上获取一个字符，将其的ASCii值赋给 ch
								//其实除了这个字符还有一个  \n
								// 比如输入 a 按enter就是在 输入缓冲区 放了一个a和\n
								// 所以就会输出一个a然后再自动换行

	printf("%c\n", ch);			//输出   也还是一个字符
	putchar(ch);				//也是输出
	printf("\n");				//换行
	printf("\n");
	EOF;						//#define EOF (-1)这个eof就是-1，然后getchar返回值类型就是EOF
								//所以前面要用int接收，就是int ch = getchar();
								//EOF： end of file
	
	int ch1 = 0;

	printf("请再输入一个字符：");

	while ((ch1 = getchar()) != EOF)	//让循环停止需要按 Ctrl+z 然后 Enter 就行了
	{
		putchar(ch1);
	
		putchar('\n');					//同样是换行
		putchar('\\n');					//打印的是 n
		printf("\\n");					//打印  \n
							
	}

	

	return 0;
}