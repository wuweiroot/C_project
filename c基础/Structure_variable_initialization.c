//�ṹ������ĳ�ʼ��������

// ��һ��ѧ������Ϣ����һ���ṹ������У�Ȼ��������ѧ������Ϣ

#include "stdio.h"
int main()
	{
		struct Student
		 	{
		 		long int num;
		 		char name[20];
		 		char sex;
		 		char adder[20];
			 }a={10101,"Li Lin",'M',"123 Beijing Road"};
		printf("NO.:%ld\nname:%s\nsex:%c\naddress:%s\n",a.num,a.name,a.sex,a.adder); 
	}
