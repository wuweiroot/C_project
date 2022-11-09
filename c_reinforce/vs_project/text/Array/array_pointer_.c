#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "E:\culture\Professional\Project\C_project\zxl\zxl.h"  //双引号有限从源文件所在位置开始查找

#define count  10

int main01(void)
{
    //数组指针，指针，指向数组的指针
    //定义数组指针变量
    int a[10] = {0};
    int i = 0;

    typedef int A[10];  //A数组类型
    A *p = NULL;  //p数组指针类型变量
    p = &a;

    for(i = 0 ; i < 10 ; i++)
    {
        (*p)[i] = i +1;  //(*p) == (*&a)  == a
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\n" ,(*p)[i]);
    }
    

    printf("\n");
    system("pause");

}


int main02(void)
{

   int a[10] = {0};
   //先定义数组指针类型，根据类型定义变量
   typedef int(*P)[10];
   P q;  //数组指针变量
   q = &a;
   for (size_t i = 0; i < count; i++)
   {
       (*q)[i] = i + 1;  //(*p) == (*&a)  == a
   }
   for (size_t i = 0; i < count; i++)
   {
       printf("%d\n" ,(*q)[i]);
   }
     

    printf("\n");
    system("pause");

}


int main(void)
{

   int a[10] = {0};
   int(*q)[10];  //数组指针变量
   q = &a;
   for (size_t i = 0; i < count; i++)
   {
       (*q)[i] = i + 1;  //(*p) == (*&a)  == a
   }
   for (size_t i = 0; i < count; i++)
   {
       printf("%d\n" ,(*q)[i]);
   }
     

    printf("\n");
    system("pause");

}