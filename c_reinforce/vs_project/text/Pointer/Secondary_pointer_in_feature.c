.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "E:\culture\Professional\Project\language_C\zxl\zxl.h"  //双引号有限从源文件所在位置开始查找
#include "..\..\..\zxl\zxl.h"


//二级指针做输入第一种内存模型


int main0(void)
{
    #define N 7
    //每个类型都是char*
    char *p0="11111111";
    char *p1="00000000";
    char *p2="aaaaaaaa";
    //指针数组，指针的数组，是一个数组，每个元素都是指针
    //char *p[]={"11111111","00000000","aaaaaaaa"};
    char *p[N]={"1","2","00","11","111","a","b"};  //每个字符串成员以\0结尾，大小比表面大1，a,b以ASCLL码形式存储
    int i = 0;
    for(i=0 ; i<N; i++)
    {
        printf("%s\n",p[i]);
    }
    printf("\n");

    for(i=0 ; i<N; i++)  //打印字符串地址
    { 
        printf("%p\n",p[i]);
    }
    printf("\n");
    
    for(i=0 ; i<N; i++)  //打印
    {
    //printf("%p\n",(p+i));
        printf("%p\n",&p[i]);
    }
    printf("\n");


    printf("\n");
    system("pause");

}

int main1(void)
{

    //每个类型都是char*
    char *p0="11111111";
    char *p1="00000000";
    char *p2="aaaaaaaa";
    //指针数组，指针的数组，是一个数组，每个元素都是指针
    //char *p[]={"11111111","00000000","aaaaaaaa"};
    char *p[]={"11111111","00000000","aaaaaaaa"};  //每个字符串成员以\0结尾，大小比表面大1，a,b以ASCLL码形式存储
    int i = 0;

    int n = sizeof(p)/sizeof(p[0]);

    printf("sizeof(p) = %d , sizeof(p[0]) = %d\n",sizeof(p),sizeof(p[0]));

    for(i=0 ; i<n; i++)
    {
        printf("%s\n",p[i]);
    }
    printf("\n");

    char *q[10] = {"11111111","00000000","aaaaaaaa"};
    printf("sizeof(q) = %d , sizeof(q[0]) = %d\n",sizeof(q),sizeof(q[0]));




    printf("\n");
    system("pause");

}


int main2(void)
{

    //每个类型都是char*
    char *p0="11111111";
    char *p1="00000000";
    char *p2="aaaaaaaa";
    //指针数组，指针的数组，是一个数组，每个元素都是指针
    //char *p[]={"11111111","00000000","aaaaaaaa"};
    char *p[]={"11111111","00000000","aaaaaaaa"};  //每个字符串成员以\0结尾，大小比表面大1，a,b以ASCLL码形式存储
    int i = 0;
    int j = 0;


    printf("before:\n");


    for(i=0 ; i<sizeof(p)/sizeof(p[0]); i++)
    {
        printf("%s\n",p[i]);
    }
    printf("\n");

    //选择法排序
    for(i= 0 ; i < sizeof(p)/sizeof(p[0])-1; i++)
    {
        for(j = i+1; j < sizeof(p)/sizeof(p[0]); j++)
        {
            if( strcmp(p[i],p[j]) > 0 )
            {
                 char *tmp = NULL;
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
    printf("\n");
    printf("after:\n");

    for(i=0 ; i<sizeof(p)/sizeof(p[0]); i++)
    {
        printf("%s\n",p[i]);
    }
    printf("\n");



    printf("\n");
    system("pause");

}

//int Sequence(char *p[] , int number)
int Sequence(char **p , int number)
{
    int i=0,j=0;
    char*tmp=NULL;
    if(p == NULL || number ==0)
    {
        return -1;
    }

    for(i= 0 ; i < number-1; i++)
    {
        for(j = i+1; j < number; j++)
        {
            if( strcmp(p[i],p[j]) > 0 )
            {
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }

    return 0;
}




int main(void)
{

    //每个类型都是char*
    char *p0="11111111";
    char *p1="00000000";
    char *p2="aaaaaaaa";
    //指针数组，指针的数组，是一个数组，每个元素都是指针
    //char *p[]={"11111111","00000000","aaaaaaaa"};
    char *p[]={"11111111","00000000","aaaaaaaa"};  //每个字符串成员以\0结尾，大小比表面大1，a,b以ASCLL码形式存储
    int i = 0;
    int j = 0;


    printf("before:\n");


    for(i=0 ; i<sizeof(p)/sizeof(p[0]); i++)
    {
        printf("%s\n",p[i]);
    }
    printf("\n");

    //选择法排序
    Sequence(p,sizeof(p)/sizeof(p[0]));
    printf("\n");
    printf("after:\n");

    for(i=0 ; i<sizeof(p)/sizeof(p[0]); i++)
    {
        printf("%s\n",p[i]);
    }
    printf("\n");



    printf("\n");
    system("pause");

}

