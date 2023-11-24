#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch‘ –Ì«∂Ã◊ π”√
		case 1: n++;
		case 2: m++; n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d ", m, n);// m = 5  n = 3
	return 0;
}