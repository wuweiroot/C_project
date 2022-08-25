//结构体指针
//指向结构体变量的指针 
//struct Student *pt;  //pt可以指向struct Student 类型的变量或数组元素 
//当p指向一个结构体变量stu_1，以下3中用法等价
//1、stu_1.成员名 （如 stu.num）
//2、（*p).成员名 （如 (*p).num） 
//3、   p->成员名 （如p->num） 

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
		struct Student stu_1;		//定义 struct Student 类型的变量 stu_1; 
		struct Student *p;			//定义指向 struct Student 类型数据类型的指针变量 p 
		p=&stu_1;			  		//P指向stu_1
		stu_1.num=10101;			//对结构体变量的成员赋值 
		strcpy(stu_1.name,"Li Lin");//用字符串复制函数给 stu_1.name 赋值	
		stu_1.sex='M';
		strcpy(stu_1.adder,"Beijing");
		printf("NO.:%ld\nname:%s\nsex:%c\naddress:%s\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.adder); 
		printf("NO.:%ld\nname:%s\nsex:%c\naddress:%s\n",(*p).num,(*p).name,(*p).sex,(*p).adder);
	
	 } 
