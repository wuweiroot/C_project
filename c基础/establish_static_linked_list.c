//用指针处理链表
//链表是一种常见的重要的数据结构，动态的进行储存分配。

//建立简单的静态链表
 
#include "stdio.h"
struct Student								//声明结构体类型 struct Student 
	{
		int num;
		float score;
		struct Student *next
	};
int main()
	{
		struct Student a,b,c,*head,*p;		//定义三个结构体变量a,b,c作为链表结点
		a.num=10101; a.score=89.5;			//对结点a的num和score成员赋值 
		b.num=10103; b.score=98;
		c.num=10107; c.score=99;
		head = &a;
		a.next = &b;
		b.next = &c;
		c.next = NULL;
		p=head;
		do
			{
				printf("%ld %5.1f\n",p->num,p->score);	//输出p指向节点的数据
				p=p->next; 
			}while(p!=NULL);
		return 0;
		 
	}
