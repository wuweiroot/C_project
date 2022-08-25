#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void)
{
    //写内存时一定要保证内存可用
    char *buf2 = "abcdef"; //文字常量区，内存不可改
    //buf2[2]='1' //err

    char buf3[] = "abcdef";
    buf3[2]='1'; //ok

    char*p = NULL;
    //给p指向的内存区域拷贝内存
    strcpy(p,"111"); //error
    
    printf("\n");
    system("pause");

}