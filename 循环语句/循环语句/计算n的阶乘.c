#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//n�Ľ׳�  1*2*3*������*n

int main7()
{
	int n = 0;
	int mutiply = 1;
	printf("����һ������");
	scanf("%d", &n);
	for (int i = 1; i <= n ; i++)
	{
		 mutiply =mutiply *i;
	}
	printf("%d�Ľ׳�Ϊ��%d\n", n,mutiply);

//���� 1��+ 2��+ 3��+������+ 10��
	
	int sum = 0;
	int ret = 1;
	for (int j = 1; j <= 10; j++)
	{
		ret = 1;
		for (int i = 1; i <= j; i++)			//����׳�
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("�׳����֮��ĺ�Ϊ��%d\n", sum);

	//�Ż��㷨
	 sum = 0;								//��������
	 ret = 1;
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("�Ż��㷨��Ľ��Ϊ��%d", sum);


	return 0;
}