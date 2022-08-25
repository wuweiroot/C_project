//指向指针数据的指针
 
 #include "stdio.h"
 int main()
 	{
 		char *name[]={"Follow me","Remember who you are","You are more better","Cf","Lol"};
 		char **p;
 		int i;
 		for(i=0 ; i<5 ; i++)
 			{
 				p=name+i;
 				printf("%d\n",*p);
 				printf("%s\n",*p);
			 }
	 }
