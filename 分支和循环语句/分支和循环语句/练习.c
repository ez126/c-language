#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main1()
{
	//�ж�һ�����Ƿ�Ϊ����
	int num1 = 1;
	printf("������һ������");
	scanf("%d", &num1);			//��������

	int m = num1 % 2;
	int a = 1 % 2;
	if (1)
	{
		if (0 == m)
		{
			printf("�������ż��\n");
		}
		else if (1 == m)
		{
			printf("������Ǹ�����\n");
		}
	}
	/*else if (1 == num1)
	{
		printf("������Ǹ�����\n");
	}
	else  
	{
		printf("������Ǹ�O��\n");
	}*/
	return 0;
}