#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



//1.��������һ���������1~100��
//2.������
//�´���
//��С��

void menu(void)										//���ɲ˵���
{
	printf("**************************************\n");
	printf("***********     1.Play     ***********\n");
	printf("***********     0.Exit     ***********\n");
	printf("**************************************\n");
}

//0~RAND_MAX(32767)  ��������rand���ֵķ�Χ
void game()
{
	int guess = 0;
	//RAND_MAX;
	//1.���������
	//�κ���ȡģ100 %100��ֵ������ 0~99
	//���� +1 ���� 1~100
	int ret = rand()%100+1;//����������ĺ���
	printf("������ǣ�%d\n", ret);		//��ʾ��������
	//2��������
							
	while (1)
	{
		printf("�������:>");			
		scanf("%d", &guess);			//��������
		system("cls");
		if (guess < ret)
		{
			printf("��С�ˣ�����һ�顣\n");
		}
		else if (guess > ret)
		{
			printf("�´��ˣ�����һ��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			Sleep(1000);
			system("cls");
			break;
		}
	}
}

//ָ��
//int *p = NULL;   #define NULL ((void *)0)
//int a = 0;
//
int main()
{
	int input = 0;
	//�����������ֻҪ���������е���һ�� srand������
	srand((unsigned int)(time(NULL)));				//srand����һ���������㣬Ҳ����һ�������������
	//unsigned int�������ǿת���޷�������
	//NULL��һ����ָ��
	do 
	{
		menu();										//����˵�����
		printf("��ѡ��:>");
		scanf("%d", &input);						//ѡ�� 0��1
		system("cls");								//����
		switch (input)								//ѡ��
		{
		case 1:
			printf("��������Ϸ\n");
			game();									//�����������Ϸ�ĺ���
			break;
		case 0:
			printf("886~~~~~~~~~~~~~~\n");
			Sleep(1000);
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);								//inputֻ�� 0 ���� 1
	return 0;
}