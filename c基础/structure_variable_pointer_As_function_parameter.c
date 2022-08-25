//用结构体变量和结构体变量的指针做函数参数

#include "stdio.h"
#define N 3
struct Student 
	{
		int num;
		char  name[20];
		float score[3];
		float aver;
	 };
int main()
	{
		void input(struct Student stu[]);
		struct Student max(struct Student stu[]);
		void print(struct Student stu);
		struct Student stu[N] , *p=stu;				//定义结构体数组和指针 
		input(p);									//调用input函数 
		print(max(p));						//调用prnt函数，以max函数的返回值为实参 
		return 0;
	}

void input(struct Student stu[])			//数组名做形参等价指针变量做形参  实参是指针变量p  传递的是地址 
	{
		int i;
		printf("请输入各学生的信息：学号、姓名、三门课的成绩:\n");
		for(i=0 ; i<N ; i++)
			{
				scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
				stu[i].aver=(stu[i].score[0],stu[i].score[1],stu[i].score[2])/3.0;
			}
	}

struct Student max(struct Student stu[])   //数组名做形参等价指针变量做形参   实参是指针变量p  传递的是地址  返回值为结构体类型数据 
	{
		int i,m=0;
		for(i=0 ; i<N ; i++)
			if(stu[i].aver>stu[m].aver)
				m=i; 
		return stu[m];    				//返回值为结构体类型数据 
	}

void print(struct Student stud)			//结构体变量做函数形参  实参用结构体变量或者结构体数组   传递的是结构体变量中各成员的值  
	{
		printf("\n成绩最高的学生是：\n");
		printf("学号:%d\n姓名：%s\n三门课成绩:%5.1f,%5.1f,%5.1f\n平均成绩：%6.2f\n",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
	}
