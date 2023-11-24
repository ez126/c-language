#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//switch语句常常用于多分支的情况
int main5()
{
	int day = 1;
	scanf("%d", &day);
	switch (day)//switch后面跟的必须是一个整型  (字符也是整型
		//这个整型决定了进入语句的入口，
{
	case 1:				//case后面必须是整型 常量才行
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:				//当switch 表达式的值并不匹配所有case标签的值时，这个default 子句后面的语句就会执行
		//所以，每个switch语句中只能出现一条default子句
		printf("选择出错Ooops!\n");
		break;
}
	return 0;
}