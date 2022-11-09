#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int *getA()
{
    static int a = 10;  //延长变量 声明周期
    return &a;
}

int main(void)
{

    int *p = getA();
    printf("%d\n",p);
    
    printf("\n");
    system("pause");

}