//�ַ�ָ������������
//���ַ�ָ��������βκ�ʵ��

//���ӦԪ�ظ��� 

#include "stdio.h"
#include<string.h>

int main()
	{
		void copy_string(char *from , char *to); 
		char *a="I am a student.";		 //�����ַ�ָ�����a����ʼ�� 
		char b[]="rember who you are.";   //	����任Ϊ	char *b="rember who you are.";   �������� why���� 
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
