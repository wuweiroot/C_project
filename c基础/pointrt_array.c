//ָ������  int*p[4];  
//ע�⣡   int(*p)[4]����ָ��һά�����ָ��䣬��ָ���ά�����е�ָ�����
 
#include "stdio.h"
#include "string.h"

int main()
	{
		void sort(char *name[] , int n);
		void print(char *name[] , int n);
		char *name[]={"Follow me","Remember who you are","You are more better","Cf","Lol"};
						//����ָ�����飬����Ԫ�طֱ�ָ������ַ���
		int n=5;
		sort(name , n);		//���ú������ַ������� 
		print(name , n);	//���ú�������ַ��� 
		return 0; 
	 } 

void sort(char *name[] , int n)
	{
		char *temp;
		int i,j,k;
		for(j=0 ; i=j<n-1 ; j++)
			{
				for(i=0 ; i<n-1-j ; i++)
					{
						if( strcmp(name[i],name[i+1])>0 )
							{
								temp=name[i] ; name[i]=name[i+1] ; name[i+1]=temp;
							}
					}
			}
	 } 

void print(char *name[] , int n)
	{
		int i;
		for(i-0 ; i<n ; i++)
			printf("%s\n",name[i]);
	}
