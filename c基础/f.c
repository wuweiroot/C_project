#include "stdio.h"
int max(int x , int y)
{
	int z;
	z=x>y?  x:y;
	return z;
}

int main()
{
	int max(int x, int y);
	int a,b,c;
	printf("please enter two integer number:\n");
	scanf("%d %d",&a,&b);
	printf("max is %d\n",max(a,b));
	return 0;
}
