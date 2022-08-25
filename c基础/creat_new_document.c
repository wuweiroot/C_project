//建立新文件  fp=fopen("E:\\Project\\fish.txt","w")   w 建立新文件，若之前有重名的文件则删去之前的文件 

#include "stdio.h"
#include "stdlib.h"

void main()
	{
		FILE *fp;
		if( !( fp=fopen("E:\\Project\\fish.txt","w") ) )  ///！逻辑取非   此语句等价于  if( (fp=fopen("E:\\Project\\fish.txt","w") == NULL) 
			{
				printf("can not open E:\\Project\\fish.txt");
				system("pause");
			}
		else
			{
				printf("open success!\n");
			}
	 } 
 
