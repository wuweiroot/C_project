#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct 
{
    int a;
    int b;
}MYstruct;

MYstruct tem;

void fun(MYstruct *p)
{
    p = NULL;
    p->a = 1;  
    
}
void fun1(MYstruct const *p)
{
    //定义MYstruct const 类型的指针p ,不能改变指针指向的内存的值
    p = NULL;
   // p->a = 1;  //err
}
void fun2(MYstruct * const p)
{
    //定义MYstruct 类型的const指针p，不能改变指针的值
    //p = NULL; //err
    p->a = 1;  
}

void fun2(const MYstruct * const p)
{
    //定义 const MYstruct 类型的const指针p 不能改变指针指向的内存的值,也不能改变指针的值
    //p = NULL; //err
    //p->a = 1;  //err
}



int main(void)
{
    char buf[] = "abcdef";

    const char *p = buf;   //定义const char 类型的指针p ,p指向buf ,不能改变指针指向的内存的值
    //char const *p = buf;   //等价上一句
    p[0]='0'; //err
    p = "ghijkl"; //ok

    char * const p2 = buf;  //定义char 类型的const指针p2 ,p2指向buf，不能改变指针的值
    p2[0]='0'; //ok
    p2 = "ghijkl"; //err

    const char * const p3 = buf;  //定义const char 类型的const指针p3 ,p3指向buf ,不能改变指针指向的内存的值,也不能改变指针的值

    //02
    // 如何引用另外一个.c中const变量(同一个目录不需要添加头文件，不同目录下找不到所有需要添加头文件)
    extern const int a_zxl ;  //不能再赋值，只能声明

    //03
    const int b = 0; //const是仅仅局限于不能通过被修饰的变量来改，但是可以通过地址改
    int *pb = &b;
    *pb = 1;

    printf("%d",a_zxl);

    printf("\n");
    system("pause");

}