#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main1()
{
	int i = 0;
	// while(������)��Ϊ�� ������ִ��
	//		ִ�����
	//while ( i < 10)// ��ӡ 1 ~ 10
	//{
	//	i++;

	//	if (5 == i)
	//	{
	//		//break;//ֱ������whileѭ������ֹ����ѭ��
	//		continue;//����������ѭ�����¿�ʼ
	//	}

	//	printf("%d\n", i);

	//}

	printf("\n");
	printf("getchar����\n");
	printf("������һ���ַ���");

	int ch = getchar();			//�Ӽ����ϻ�ȡһ���ַ��������ASCiiֵ���� ch
								//��ʵ��������ַ�����һ��  \n
								// �������� a ��enter������ ���뻺���� ����һ��a��\n
								// ���Ծͻ����һ��aȻ�����Զ�����

	printf("%c\n", ch);			//���   Ҳ����һ���ַ�
	putchar(ch);				//Ҳ�����
	printf("\n");				//����
	printf("\n");
	EOF;						//#define EOF (-1)���eof����-1��Ȼ��getchar����ֵ���;���EOF
								//����ǰ��Ҫ��int���գ�����int ch = getchar();
								//EOF�� end of file
	
	int ch1 = 0;

	printf("��������һ���ַ���");

	while ((ch1 = getchar()) != EOF)	//��ѭ��ֹͣ��Ҫ�� Ctrl+z Ȼ�� Enter ������
	{
		putchar(ch1);
	
		putchar('\n');					//ͬ���ǻ���
		putchar('\\n');					//��ӡ���� n
		printf("\\n");					//��ӡ  \n
							
	}

	

	return 0;
}