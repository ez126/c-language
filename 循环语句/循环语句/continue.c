#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main3()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch >'9')		//�ж��ַ��Ƿ���0~9����ʵ�����ж�����ַ���Asciiֵ�Ƿ���0��9��ASCIIֵ֮��
			continue;					//continue��������Ҫ��ѭ��
		putchar(ch);
	}
	//ֻ��ӡ�����ַ�
	//���������ֵĻ������ȴ浽����������һ��һ����ӡ����
	// ��Ȼ�������һ�� \n ��
	//Ҫ�������� asdas3132asaf �����Զ�������ĸ��ֻ��ӡ����

	return 0;
}