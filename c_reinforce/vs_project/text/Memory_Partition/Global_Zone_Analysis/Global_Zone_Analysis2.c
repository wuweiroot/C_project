#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int aa =1;  //全局变量，可以在任意函数内部被修改

int fun()
{
    aa = 2;
}


int main(void)
{
    int a = 0;  //栈区
    printf("%p\n",&a);

    fun();
    printf("%d\n",aa);

    printf("\n");
    system("pause");

}