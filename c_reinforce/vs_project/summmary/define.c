#include <stdio.h>

#define flag (f(a)==1 ? 0:1 )
#define flag3 (a==1 ? 0:1 ) 

int a = 0 ;
int b = 0 ;
int f(int a);
//int	flag2 =  (a==1 ? 0:1); //错误，初始化数据不是常量

//a =f(a);    //语法错误静态数据区不能调用函数
//b =flag3;	//错误，初始化数据不是常量
int main()
{
	b = flag ;
	a = f(a);
  int	flag2 =  (a==1 ? 0:1);
	
   printf("Hello, World! \n");
   printf("%d \n",flag);
   printf("%d \n",flag3);
   
   return 0;
}

int  f(int a)
{
	return a;
}