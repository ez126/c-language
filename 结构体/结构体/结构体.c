#include<stdio.h>
//char
//short
//int
//long
//float
//double
//�� : ���� + ���� + �Ա� + ��ַ + �绰
//�� : ���� + ���� + ������ + ���� + ���
//���Ӷ���
//C���Ծ͸����Զ������͵�����
//�Զ�����������һ�ֽ� : �ṹ��
// struct
//�ṹ���ǰ�һЩ��һ���������һ��

struct Student
{
	//�ṹ��ĳ�Ա
	char name[20];// ��c������û���ַ�������string��Ҫ���ʾһ���ַ���������һ���ַ��͵����飻
	int age;
	char sex[10];

};

void print(struct Student* p1)//��Ϊ�Ǵ�ӡ�����Բ���Ҫ����
{
	// ->
	// �ṹ��ָ����� -> ��Ա��
	printf("ָ��ȡ��ַ��ӡ:\t\t%s %d %s  \n", p1->name, p1->age, p1->sex);
	//Ҳ�����ǣ�*p1��.name�����ģ��Ƚ����ã�Ȼ������
	printf("������ָ��ȡ��ַ��ӡ %s %d %s \n", (*p1).name, (*p1).age, (*p1).sex);
}

int main()
{
	struct Student stu1 =
	{
		"�³³�",
		18,
		"��"
	};
	//ע����� .
	printf("ѧ��1����Ϣ��%s %d %s\n", stu1.name ,stu1.age ,stu1.sex);
	print(&stu1);
	return 0;
}