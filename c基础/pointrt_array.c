//指针数组  int*p[4];  
//注意！   int(*p)[4]则是指向一维数组的指针变，即指向二维数组行的指针变量
 
#include "stdio.h"
#include "string.h"

int main()
	{
		void sort(char *name[] , int n);
		void print(char *name[] , int n);
		char *name[]={"Follow me","Remember who you are","You are more better","Cf","Lol"};
						//定义指针数组，它的元素分别指向五个字符串
		int n=5;
		sort(name , n);		//调用函数对字符串排序 
		print(name , n);	//调用函数输出字符串 
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
