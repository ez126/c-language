#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//在一个有序数组中查找某个数字n（二分查找）
int main89 ()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };		//创建数组
	int k = 7;									//要查找的数
	
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);		//数组长度

	int left = 0;								//查找范围的左下标
	int right = 9;								//查找范围的右下标
	int mid = (left + right) / 2;				//中间值
	while (left <= right)
	{
		if (arr[mid] < k)						//判断k在哪个范围，再进行缩区间
		{
			left = mid + 1;						//
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}