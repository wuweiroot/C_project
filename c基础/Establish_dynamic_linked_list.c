//������̬����
//�ڴ涯̬���亯��
//1 malloc����  ����ֵΪ��ַ  vold *malloc(unsigend int size)

//����һ����3��ѧ�����ݵĵ���̬����
#include "stdio.h"
#include "stdlib.h"
#define LEN sizeof(struct Student)
struct Student
	{
		long num;
		float score;
		struct 	Student *next;
	};

int n;     //����һ��ȫ�ֱ���

struct Student *creat(void)   //���庯�����˺�������һ��ָ������ͷ��ָ��
	{
		struct Student *head;
		struct Student *p1 , *p2;
		n=0;
		p1=p2=(struct Student*) malloc(LEN);		//����һ���µ�Ԫ���ѵ�ַ����p1 p2 
		scanf("%ld %f",&p1->num,&p1->score);	//�����һ��ѧ����ѧ�źͳɼ�
		head=NULL;
		while(p1->num!=0)
			{
				n=n+1;
				if(n==1)
					head=p1;
				else
					p2->next=p1;
				p2=p1;
				p1=(struct Student*)malloc(LEN);     //���ٶ�̬�洢��������ʼ��ַ����P1
				scanf("%d %f",&p1->num,&p1->score);  //��������ѧ����ѧ�źͳɼ� 
			 } 
		p2->next=NULL;
		return(head);	 
	 } 
int main()
	{
		struct Student *pt;
		pt=creat();												//������������ĵ�һ�����ĵ�ַ 
		printf("\nnum:%ld\nscore:%5.1f\n",pt->num,pt->score);	//�����һ�����ĳ�Աֵ
		return 0; 
    }
