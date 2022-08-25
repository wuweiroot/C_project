//√∞≈›∑®≈≈–Ú
#include "stdio.h"
#define N 10
int main()
{
  	int i , j , t;
	int a[N];
	printf("input 10 numbers : \n");
	
	for(i=0 ; i<N ; i++)
		scanf("%d",&a[i]);
	
	printf("\n");
	
	for(j=0 ; j<N-1 ; j++)
		for(i=0 ; i<N-1-j ; i++)
			{
				if(a[i]>a[i+1])
					{
						t=a[i]; a[i]=a[i+1]; a[i+1]=t;
					}
			}
	printf("the sorted numbers:\n");
	for(i=0 ; i<N ; i++)
		printf("%d  ",a[i]);
		
	return 0;
}
