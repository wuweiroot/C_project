#include "stdio.h"
#include<string.h>

int main()
	{
		void copy_string(char *from , char *to); 
		char *a="I am a student.";		 //定义字符指针变量a并初始化 
		char b[]="rember who you are.";   //	此语句换为	char *b="rember who you are.";    则报错 ？？ 是因为--字符指针str与字符数组string的区别是：str是一个变量，可以改变str使它指向不同的字符串，但不能改变str所指的字符串常量。string是一个数组，可以改变数组中保存的内容。
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