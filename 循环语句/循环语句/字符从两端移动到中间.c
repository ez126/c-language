#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>		//Ҫ��sleep�����������Ҫ�����ͷ�ļ�
#include<stdlib.h>		//��system��ͷ�ļ�

int main23()
{
	char str1[] = "welcome to wlord!!!";				//��������
	char str2[] = "###################";

	int len = strlen(str2);
	int left = 0;										//�����±�
	int right = sizeof(str1) / sizeof(str1[0]) - 2;
	//int right = strlen(str2) - 1;
	
	while (left <= right)
	{
		str2[left] = str1[left];						//�����ַ��滻
		str2[right] = str1[right];
		/*for (int i = 0; i < len; i++)					//��1
		{
			printf("%c", str2[i]);
		}*/
		printf("%s", str2);								//��2  ���Ƕ��д�ӡ
		Sleep(500);									//�൱��delay_ms(1000)
		
		//�����Ļ
		system("cls");								//ִ��Windows��clsָ�Ҳ������Windows��cmd�е������Ļ		
		//system��һ���⺯��������ִ��ϵͳ����
		//printf("\n");
		left++;
		right--;
	}
	printf("%s\n", str2);							//��ֹ���һ������֮����Ļ��ʲô��û�У������ٴ�ӡһ��

	printf("");
	return 0;
}