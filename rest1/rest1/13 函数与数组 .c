#define _CRT_SECURE_NO_WARNINGS//���һ��Ҫ���ڵ�һ�У�����scanf
#include<stdio.h>
#include<string.h>


//int sum( int num1,int num2)
//{
//	int sum = 0;
//	sum = num1 + num2;
//	return sum;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//����
//	scanf("%d %d", &a, &b);
//
//	int z=sum(a, b);
//
//	//��ӡ���
//	printf("%d\n", z);
//	return 0;
//}

//�༭ȡ�Ƚ����ֵ�ĺ���Max
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main6()
{
	int arr1[] = { 1,2,23,4,5,65,2 };//x�±�Ҳ�Ǵ�0��ʼ��
	for (int i = 0; i < 7; i++)
	{
		printf("%d\n", arr1[i]);
	}

	char ch[4] = "acv";
	
	
	//�������������ֵ
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = Max(a, b);
	printf("%d", m);
	return 0;
}

