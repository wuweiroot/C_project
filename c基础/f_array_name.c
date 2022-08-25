//形参数组名（等价指针变量）  实参用数组名 （等价首元素)
#include "stdio.h"
float average(float array[],int n)
	{
		int i;
		float aver , sum=array[0];
		for(i=1 ; i<n ; i++)
			sum=sum+array[i];
		aver=sum/n;
		return(aver);
	}

int main()
	{
		float scorel[5]={98,5,97,5,60,55};
		float score2[10]={74,85,41,62,81,95,71,852,15,35};
		printf("the average of clase A is %6.2f\n",average(scorel,5));
		printf("the average of clase B is %6.2f\n",average(score2,10));
	 } 
