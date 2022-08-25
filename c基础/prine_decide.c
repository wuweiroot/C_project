#include "stdio.h"
int main()
{
	int a,i;
	
	printf("please input a number!\n");
	scanf("%d",&a);
	
	for(i=2 ; i<a ; i++)
		{
			if(a%i==0) break;
		}
		
	if(i==a)
		printf("%d is a prine number.\n",a);
	else
		printf("%d is not a prine number.\n",a);
	
	return 0;
		
} 
