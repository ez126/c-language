#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main3()
{
	int age1 = 13;
	if (age1 > 18)//if()����������棬ֻ���ж���٣�Ҳ����0��1��Ϊ���ִ�У�Ϊ�پͲ�ִ��
	{
		printf("����\n");
		printf("��������\n");//�������if���Ҫִ�ж�����䣬��Ҫ�Ӹ�{}��������
	}
	else
	{
		printf("δ����\n");
	}
		
	//���֧��if���

	int age = 10;
	printf("���������䣺");
	scanf("%d", &age);
	printf("����ֶ�Ϊ��");
	if (age < 18)
		printf("������\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 40)
		printf("����\n");
	else if (age >= 40 && age < 60)
		printf("׳��\n");
	else if (age >= 60 && age <= 100)
		printf("����\n");
	else
		printf("������\n");


	int a = 0;
	int b = 2;
	if (a == 1)//���Ⱦ����ж�Ϊ�پͲ�����к���
		if (b == 2)
			printf("hehe\n");
		else//else�Ǻ�����������if����ƥ��
			printf("haha n");

	return 0;
}