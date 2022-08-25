//字符指针做函数参数
//用字符指针变量做形参和实参

//与对应元素复制 

#include "stdio.h"
#include<string.h>

int main()
	{
		void copy_string(char *from , char *to); 
		char *a="I am a student.";		 //定义字符指针变量a并初始化 
		char b[]="rember who you are.";   //	此语句换为	char *b="rember who you are.";   则程序崩溃 why？？ 
		char *p=b;
		printf("string a=%s\nnstering b=%s\n",a,b);
		printf("\ncopy string a to string b:\n");
		
		copy_string(a,p);
		printf("\nstring a=%s\nstring b=%s\n",a,b);
		return 0;
	 } 
void copy_string(char *from , char *to)
	{
		for( ; *from!='\0' ; from++,to++)
			{
				*to=*from;
			}
		*to='\0';
	}
