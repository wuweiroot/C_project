//�ṹ��ָ��
//ָ��ṹ�������ָ�� 
//struct Student *pt;  //pt����ָ��struct Student ���͵ı���������Ԫ�� 
//��pָ��һ���ṹ�����stu_1������3���÷��ȼ�
//1��stu_1.��Ա�� ���� stu.num��
//2����*p).��Ա�� ���� (*p).num�� 
//3��   p->��Ա�� ����p->num�� 

#include "stdio.h"
#include "string.h"
int main()
	{
		struct Student
		 	{
		 		long int num;
		 		char name[20];
		 		char sex;
		 		char adder[20];
			 };
		struct Student stu_1;		//���� struct Student ���͵ı��� stu_1; 
		struct Student *p;			//����ָ�� struct Student �����������͵�ָ����� p 
		p=&stu_1;			  		//Pָ��stu_1
		stu_1.num=10101;			//�Խṹ������ĳ�Ա��ֵ 
		strcpy(stu_1.name,"Li Lin");//���ַ������ƺ����� stu_1.name ��ֵ	
		stu_1.sex='M';
		strcpy(stu_1.adder,"Beijing");
		printf("NO.:%ld\nname:%s\nsex:%c\naddress:%s\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.adder); 
		printf("NO.:%ld\nname:%s\nsex:%c\naddress:%s\n",(*p).num,(*p).name,(*p).sex,(*p).adder);
	
	 } 
