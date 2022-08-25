//用指向函数的指针作函数参数


#include "stdio.h"
int main()
	{
		int max(int , int);
		int min(int , int);
		int add(int , int);
		int fun(int x , int y , int (*p)(int,int));
		int a,b,n;
		printf("please enter a and b:");
		scanf("%d %d",&a,&b);
		printf("please choose 1 , 2 or 3:");
		scanf("%d",&n);
		if(n==1)
			fun(a , b , max);
		else if(n==2) 
			fun(a , b , min);
		else if(n==3)
			fun(a ,b , add);
		return 0;
	 } 
	 
int fun(int x, int y , int(*p)(int , int))
	{
		int result;
		result=(*p)(x , y);
		printf("%d\n",result);
	}

int max(int x, int y)
	{
		int z;
		if(x>y)
			z=x;
		else
			z=y;
		printf("max=");
		return z;
	}
		 

int min(int x, int y)
	{
		int z;
		if(x<y)
			z=x;
		else
			z=y;
		printf("min=");
		return z;
	} 
	

int add(int x, int y)
	{
		int z;
		z=x+y;
		printf("add=");
		return z;
	} 
