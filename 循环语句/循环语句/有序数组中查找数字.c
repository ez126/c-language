#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��һ�����������в���ĳ������n�����ֲ��ң�
int main89 ()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };		//��������
	int k = 7;									//Ҫ���ҵ���
	
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);		//���鳤��

	int left = 0;								//���ҷ�Χ�����±�
	int right = 9;								//���ҷ�Χ�����±�
	int mid = (left + right) / 2;				//�м�ֵ
	while (left <= right)
	{
		if (arr[mid] < k)						//�ж�k���ĸ���Χ���ٽ���������
		{
			left = mid + 1;						//
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}