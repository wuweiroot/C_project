//�ýṹ������ͽṹ�������ָ������������

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
		struct Student stu[N] , *p=stu;				//����ṹ�������ָ�� 
		input(p);									//����input���� 
		print(max(p));						//����prnt��������max�����ķ���ֵΪʵ�� 
		return 0;
	}

void input(struct Student stu[])			//���������βεȼ�ָ��������β�  ʵ����ָ�����p  ���ݵ��ǵ�ַ 
	{
		int i;
		printf("�������ѧ������Ϣ��ѧ�š����������ſεĳɼ�:\n");
		for(i=0 ; i<N ; i++)
			{
				scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
				stu[i].aver=(stu[i].score[0],stu[i].score[1],stu[i].score[2])/3.0;
			}
	}

struct Student max(struct Student stu[])   //���������βεȼ�ָ��������β�   ʵ����ָ�����p  ���ݵ��ǵ�ַ  ����ֵΪ�ṹ���������� 
	{
		int i,m=0;
		for(i=0 ; i<N ; i++)
			if(stu[i].aver>stu[m].aver)
				m=i; 
		return stu[m];    				//����ֵΪ�ṹ���������� 
	}

void print(struct Student stud)			//�ṹ������������β�  ʵ���ýṹ��������߽ṹ������   ���ݵ��ǽṹ������и���Ա��ֵ  
	{
		printf("\n�ɼ���ߵ�ѧ���ǣ�\n");
		printf("ѧ��:%d\n������%s\n���ſγɼ�:%5.1f,%5.1f,%5.1f\nƽ���ɼ���%6.2f\n",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
	}
