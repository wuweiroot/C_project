//����Ԫ����Ϊ����ʵ��
//����10������Ҫ�����ֵ����Ԫ�غ͸����ǵڼ�����

#include "stdio.h"
#define N 10
int a[N],i;  //�����ڶ���ı����Ǿֲ����� �����ⶨ��ı�����ȫ�ֱ��� 
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
