//µÝ¹éº¯Êý
#include "stdio.h"
int main()
{
	int fac(int n);
	int n;
	printf("pleas input an integer number:\n");
	scanf("%d",&n);
	printf("%d!=%d",n,fac(n));	
 } 
 
 int fac(int n)
 {
 	int f;
 	if(n<0)
 		printf("n<0,data error");
 	else if(n==0||n==1)
 		f=1;
 	else 
 		f=fac(n-1)*n;
 	return(f);
}
