#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main4()
{
	printf("0~100�������У�");
	for (int i = 1; i <= 100; i++)
	{
		int Re = i % 2;			//ȡ��
		if (1 == Re)			//�ж�
		{
			printf("%d ", i);	//���
		}
	}
	printf("\n0~100��ż���У�");
	for (int i = 1; i <= 100; i++)
	{
		int Re = i % 2;
		if (0 == Re)
		{
			printf("%d ", i);
		}
	}
	
	
	return 0;
}