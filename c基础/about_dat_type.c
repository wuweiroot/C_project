//����Ϊ�������Ϊ���Σ����������С������Ҫ����������м�ı��������� 


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
		
		return  (   (a1*1.0+an)/2*((an-a1)/d+1)   );  //a1*1.0ת��ΪС������ 
	}
