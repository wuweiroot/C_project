//指向多维数组的指针变量

//（2）指向一维数组（行）的指针变量 

#include "stdio.h"

int main()
	{
		int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
		int (*p)[4],i,j;
		p=a;
		printf("please enter row and colum\n");
		scanf("%d %d",&i,&j);
		printf("a[%d,%d]=%d",i,j,*(*(p+i)+j) );
		
	 } 

