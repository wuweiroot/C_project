#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define IN 
#define OUT

void fun(IN char *p)
{
    if(p == NULL)
    {
        return;
    }
    //给p指向的内存区域拷贝
    strcpy(p,"abcdrf");
}
/* 
修改函数外部变量值，传入变量地址。
修改函数外部指针变量值，穿入指针变量地址。
 */
void fun2(OUT char **p , OUT int* len)
{
    if(p==NULL)    return;
    
    char *tmp = (char *)malloc(100);   //传出指针
    if(tmp == NULL)  return;
    
    strcpy(tmp,"abcdef");
    //间接赋值，通过*操作内存
    *p = tmp;
    *len = strlen(tmp);
}

int main(void)
{

    //输入，主调函数分配内存
    char buf[100]={0};
    fun(buf);
    printf("buf = %s\n",buf);

    //输出。被调函数分配内存,地址传递
    char *p = NULL;  //定义一个指针变量
    int len = 0;
    fun2(&p , &len);
    if(p !=  NULL)
    {
        free(p);
        printf("p = %s, len = %d",p,len);
    }


    
    printf("\n");
    system("pause");

}