//��ָ�봦������
//������һ�ֳ�������Ҫ�����ݽṹ����̬�Ľ��д�����䡣

//�����򵥵ľ�̬����
 
#include "stdio.h"
struct Student								//�����ṹ������ struct Student 
	{
		int num;
		float score;
		struct Student *next
	};
int main()
	{
		struct Student a,b,c,*head,*p;		//���������ṹ�����a,b,c��Ϊ������
		a.num=10101; a.score=89.5;			//�Խ��a��num��score��Ա��ֵ 
		b.num=10103; b.score=98;
		c.num=10107; c.score=99;
		head = &a;
		a.next = &b;
		b.next = &c;
		c.next = NULL;
		p=head;
		do
			{
				printf("%ld %5.1f\n",p->num,p->score);	//���pָ��ڵ������
				p=p->next; 
			}while(p!=NULL);
		return 0;
		 
	}
