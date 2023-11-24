#include<stdio.h>

int main2()
{
	int num = 3;
	if (5 == num)//if （num == 5）最好是把数字写在前面

		//因为如果是写在后面的话就是可能会写成赋值的那个 num = 5；这样的话这个语句必然为真
		//如果是前面写成 5 = num 的话这个系统是会自动报错的

		printf("okok");
	return 0;
}