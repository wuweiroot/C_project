//指针变量的应用
//变量存放值   指针变量存放地址
//指针是地址   存放指针的变量是指针变量 
//输入a,b两个整数，按照先大后小的顺序输出a和b
//利用指针交换地址 即 指针指向

#include "stdio.h"
int main()
	{
		int *p1,*p2,*p,a,b;
			printf("Please enter twointeger number:\n");
			scanf("%d %d",&a,&b);
			p1=&a;
			p2=&b;
			if(a<b)
				{
					p=p1; p1=p2; p2=p;
				}
			printf("a=%d,b=%d\n",a,b);
			printf("max=%d,min=%d",*p1,*p2);
			return 0;
	 } 

