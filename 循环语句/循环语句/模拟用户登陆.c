 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>		//Ҫ��sleep�����������Ҫ�����ͷ�ļ�
#include<stdlib.h>		//��system��ͷ�ļ�
#include<string.h>		//����strcmp��ͷ�ļ�
//.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����.(ֻ���������������룬���������ȷ��)
//��ʾ��¼�ɣ�������ξ�����������˳�����

int main88()
{
	int i = 0;
	char password[20] = { 0 };
	//�����������ַ���:abcdef
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		//if (password == "abcdef")						//�Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯��:strcmp
		if(strcmp(password,"abcdef") == 0)				//�������ֵ��0����ʾ2���ַ������
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("����������������\n");			//��������
		}
		Sleep(500);										//ͣ��500ms
		system("cls");									//�����Ļ
	}
	if (3 == i)
	{
		printf("��ʮ����ٴ�����\n");
	}
	
	return 0;
}