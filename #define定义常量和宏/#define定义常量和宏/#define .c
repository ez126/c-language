#include<stdio.h>

//// define�����ʶ������
//#define NUM 100
//
//
//
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//
//	return 0;
//}



// #define�����
//�������в�����
#define ADD(x,y) ((x)+(y))
//    ����  ����Ĳ����������������͵ģ���   �����壩

int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	printf("%d\n", c);
	return 0;
}