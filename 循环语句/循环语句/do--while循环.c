#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main6()
{

	int i = 1;
	do
	{	
		i++;
		if (5==i)
		{
			//break;
			continue;
		}
		printf("%d\n", i);
		
	} while (i <= 10);

	return 0;
}