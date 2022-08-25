#include "stdio.h"
#include "math.h"
int main()
	{
		double a,b,c,s;
		
		scanf("%lf %lf %lf",&a,&b,&c);
		s=(1/4)*sqrt( (a+b+c)*(a+b-c)*(b+c-a)*(a+c-b) );
		printf("%.2lf",s);
		
	}
