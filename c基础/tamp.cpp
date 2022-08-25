#include <stdio.h>

int a=1,b=2,c=12,d=12,e=13; 
int main()
{
	printf("%d %d %d\n",a,b,c);
	d=a;
	d=b;
	printf("%d %d %d\n",d);
	
	
	d=a|b;
	printf("%d %d %d\n",d);
	return 0;
}

