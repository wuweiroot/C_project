//结构体变量的初始化和引用

// 把一个学生的信息放在一个结构体变量中，然后输出这个学生的信息

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
