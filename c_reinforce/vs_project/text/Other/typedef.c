#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int u32;

//typedef 常和结构体使用
typedef struct Mysstruc
{
    int a;
    int b;
}TMP;


/* 
    void 无类型
    1 .函数参数为空。定义参数，可以用void修饰： int fun(void)
    2 .函数没有返回值 void fun(void)
    3 .不能定义void类型的普通变量 void a //error,无法确定类型，不同类型分配空间不一样
    4 .可以定义void *变量 void *p //ok 32位程序4字节  64位程序 8字节
    5 .数据类型本质，固定内存块的别名
    6 .void *p 万能指针，函数返回值，函数参数


 */


int main(void)
{
   
    printf("\n");
    system("pause");
    return 0;
}