//ָ�������Ӧ��
//�������ֵ   ָ�������ŵ�ַ
//ָ���ǵ�ַ   ���ָ��ı�����ָ����� 
//����a,b���������������ȴ��С��˳�����a��b
//����ָ�뽻����ַ �� ָ��ָ��

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

