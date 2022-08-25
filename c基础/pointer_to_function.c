//指向函数的指针

//通过指针变量访问它所指向的函数

#include "stdio.h" 
int main()
	{
		int max(int , int);
		int(*p)(int , int);						//定义指向函数的指针变量P 
		int a,b,c;
		p=max;									//使p指向max函数 
		printf("please enter a and b:");
		scanf("%d %d",&a,&b);
		c=(*p)(a,b);
		printf("a=%d\nb=%d\namx=%d\n",a,b,c);
		return 0;
	}

int max(int x, int y)
	{
		int z;
		if(x>y)
			z=x;
		else
			z=y;
		return z;
	}
