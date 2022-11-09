#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "E:\culture\Professional\Project\C_project\zxl\zxl.h"  //双引号有限从源文件所在位置开始查找



int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8};

    int  a1[100] = {1,2,3,4};

    int n = 0 ;
    n = sizeof(a)/sizeof(a[0]);

    printf("n = %d\n", n);

    //数组类型
    //a代表首元素地址
    //&a代码代表整个元素首地址。它和首元素地址是一样的。但是步长不一样
    printf("a : %d, a+1 : %d\n" , a,a+1); //+4
    printf("&a : %d, &a+1 : %d\n" , &a,&a+1); //32 = 4*8

    //数组类型：由元素格式 和元素类型对应 int [8]

    typedef int A[8]; //代表数组类型
    //typedef int (A)[8]

    A b ; //int b[8] 去了typedef b替换到A的位置

    printf("\n");
    system("pause");

}