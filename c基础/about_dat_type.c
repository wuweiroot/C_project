//输入为整形输出为整形，运算过程有小数的需要在运算过程中间改变数据类型 


#include "stdio.h"

int main()
	{
		int arithmetic_sequence(int a1, int an, int d);
		int a1,an,d;
		scanf("%d %d %d",&a1,&an,&d);
		printf("%d\n",arithmetic_sequence(a1,an,d));
		return(0);
	}
int arithmetic_sequence(int a1, int an, int d)
	{ 
		
		return  (   (a1*1.0+an)/2*((an-a1)/d+1)   );  //a1*1.0转换为小数类型 
	}
