//变量存放值   指针变量存放地址
//指针是地址   存放指针的变量是指针变量 

//指针变量作为函数参数

#include "stdio.h"
void swap(int *p1 , int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int main()
	{
		int a,b;
		int *pointer_1 , *pointer_2;
		printf("please enter a and b:");
		scanf("%d,%d",&a,&b);
		pointer_1=&a;
		pointer_2=&b;
		if(a<b)
			{
				swap(pointer_1,pointer_2);
			}
		printf("max=%d,min=%d\n",a,b);
		return 0;
 	}
 
