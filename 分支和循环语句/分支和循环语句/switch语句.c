#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//switch��䳣�����ڶ��֧�����
int main5()
{
	int day = 1;
	scanf("%d", &day);
	switch (day)//switch������ı�����һ������  (�ַ�Ҳ������
		//������;����˽���������ڣ�
{
	case 1:				//case������������� ��������
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:				//��switch ���ʽ��ֵ����ƥ������case��ǩ��ֵʱ�����default �Ӿ��������ͻ�ִ��
		//���ԣ�ÿ��switch�����ֻ�ܳ���һ��default�Ӿ�
		printf("ѡ�����Ooops!\n");
		break;
}
	return 0;
}