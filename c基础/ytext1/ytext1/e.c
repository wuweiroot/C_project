#include"stdio.h"

int main()
{
	int pf(int x);
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
    pf(x);
    pf(y);
    pf(z);
/*	
	printf("%-9d %-9d %-9d\n",x,x*x,x*x*x);
	printf("%-9d %-9d %-9d\n",y,y*y,y*y*y);
	printf("%-9d %-9d %-9d\n",z,z*z,z*z*z);
	*/
	
	return 0;
}
6
	int pf(int x)
{
		printf("%-9d %-9d %-9d\n",x,x*x,x*x*x);
}