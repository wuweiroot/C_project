//数组元素作为函数实参
//输入10个数，要求输出值最大的元素和该数是第几个数

#include "stdio.h"
#define N 10
int a[N],i;  //函数内定义的变量是局部变量 函数外定义的变量是全局变量 
int input()
	{
		printf("please input N integer number\n");
		for(i=0 ; i<10 ; i++ )
			 	{
			 		scanf("%d",&a[i]);
				 }
		printf("\n");
	}  
int max(int x , int y)
	{
		return(x>y? x:y);
	}
int main()
	{
		int m,n;
		input();
		for(i=1,m=a[0],n=0 ; i<N ; i++)
			{
				if( max(a[i],m)>m )
					{
						m=max(m, a[i]);
						n=i;
					}		
			}
		printf("Thelargest is %d\nit is the %d number.\n",m,n+1);
	}
