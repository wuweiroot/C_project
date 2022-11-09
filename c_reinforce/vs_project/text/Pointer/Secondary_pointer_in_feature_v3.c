#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "E:\culture\Professional\Project\C_project\zxl\zxl.h"  //双引号有限从源文件所在位置开始查找


int Sequence(char a[][30] , int number)
{
    int i=0,j=0;
    char tmp[30];
    if(a == NULL || number ==0)
    {
        return -1;
    }

    for(i= 0 ; i < number-1; i++)
    {
        for(j = i+1; j < number; j++)
        {
            if( strcmp(a[i],a[j]) > 0 )
            {
                strcpy(tmp,a[i]);
                strcpy(a[i] , a[j]);
                strcpy(a[j] , tmp);
            }
        }
    }

    return 0;
}



int main0(void)
{

   int i =0;
   int n =3;

   char *p0 = NULL;
   p0 = (char*)malloc(100);
   strcpy(p0,"abcede");

   char *p[10] = {0};
   for(i=0 ; i < 10 ; i++)
   {
       p[i] = malloc(100);
       strcpy(p[i],"abcdef");
   }
  
   int a[10];
   int *q = (int*)malloc(10*sizeof(int)); //q[10]

    //动态分配一个数组，每个数组都是char *
    char **buf = (char**)malloc( n*sizeof(char*) ); //char *buf
    for(i=0 ; i<n ; i++)
    {
        buf[i] = (char*)malloc(30*sizeof(char));
        char str[30];
        sprintf(str , "test%d%d",i,i);
        strcpy(buf[i],str);

    }
    
    for (size_t i = 0; i < 3; i++)
    {
        printf("%s ",buf[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        free(buf[i]);
        buf[i] = NULL;
    }
    if(buf != NULL)
    {
        free(buf);
    }

    

    printf("\n");
    system("pause");

}

char **GetMem(int n)
{
    //动态分配一个数组，每个数组都是char *
    int i = 0;
    char **buf = (char**)malloc( n*sizeof(char*) ); //char *buf
    for(i=0 ; i<n ; i++)
    {
        buf[i] = (char*)malloc(30*sizeof(char));
        char str[30];
        sprintf(str , "test%d%d",i,i);
        strcpy(buf[i],str);

    }
    if(buf == NULL)
    {
        return NULL;
    }
    return buf;
}

void printf_buf(char** buf, int n)
{
    int i = 0;
    for (size_t i = 0; i < n; i++)
    {
        printf("%s ",buf[i]);
    }
}

void free_buf(char** buf, int n)
{
    int i = 0;
    for(i=0 ; i<n ; i++)
    {
        free(buf[i]);
        buf[i] = NULL;
    }
    if(buf != NULL)
    {
        free(buf);
    }
}   

int main(void)
{
    char **buf = NULL;
    int n = 3;
    int i = 0;

    buf=GetMem(n);

    printf_buf(buf,n);

    free_buf(buf,n);

    buf = NULL;

    printf("\n");
    system("pause");

}