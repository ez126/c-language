#include<stdio.h>
#define _CRT_SECURE_NO WARNINGS


//typdef 将输入起来不方便的类型给他简化一下

typedef unsigned int uint;
 //用 typedef将unsigned int 类型定义为  uint
 
typedef unsigned int uint32_t;

typedef struct Node
{
	int data;
	struct Node* next;
	
}Node;//这个就是将整个struct Node 这个结构体类型定义为Node  ，就相当于上面的那种

int main1()
{

	unsigned int num = 0;
	uint  num1 = 1;

	struct Node  n1;
	Node n2;//用typedef定义过之后就可以这样建立结构体



	return 0;
}






