#define _CRT_SECURE_NO WARNINGS//���һ��Ҫ���ڵ�һ�У�����scanf
#include<stdio.h>
#include<string.h>

int main3()
{
	
	//1@0 - int
//#qWer$
//char �ַ�����
//'a';
//char ch ='w';
//�ַ���
//��������û���ַ���������?û��
// 
// 
//"abcdef" ��������ַ�����˫����
//Ҫ���뱣��һ���ַ�����ô���Ƕ���һ���ַ�����
	char arr1[] = "abcde"; //��������6�����ݣ��Դ�һ��  \0
	char arr2[] = { 'a','b','c','d','e','f','\0'};//�������������Ҫ�Ӹ�  

	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = strlen(arr1);//��������µĳ��� ����  \0
	int len3 = strlen(arr2);//strlen��ֱ�����ַ������ȵĺ���  string length
	//   \0  ��ʾ�ַ��������������������ʱ�򣬻�һֱ������ڴ�ռ����� \0 ��λ��
	printf("\n");
	printf("arr1Ϊ��%s", arr1);
	printf("\n");
	printf("arr2Ϊ��%s\n", arr2);
	printf("arr1����ĳ���Ϊ��%d\n",len1);
	printf("arr1�������������Ϊ��%d\n", len2);
	printf("arr2����ĳ���Ϊ��%d\n", len3);
	

		
	return 0;
}