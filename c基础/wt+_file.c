//读写文件  wb+ 如果指定文件不存在则新建文件在读写

#include "stdio.h"
#include "stdlib.h"

void main()
	{
		FILE *fp;
		char ch,filename[20];
		
		printf("please input the filename you want to writer:");
		scanf("%s",filename);
		
		if( !(fp=fopen(filename,"wt+") ) )
			{
				printf("cannot open the file!\n");
				exit(0);	//终止程序 
			}
		printf("please input the sentences you want to writer: ");
		ch=getchar();
		ch=getchar();
		while(	ch!='#' )  //ctrl + z 
			{
				fputc(ch,fp);
				ch=getchar();
			 } 
		fclose(fp);
	 } 	
