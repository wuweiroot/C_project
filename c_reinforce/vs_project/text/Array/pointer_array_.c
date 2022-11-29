#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "E:\culture\Professional\Project\C_project\zxl\zxl.h"  //双引号有限从源文件所在位置开始查找
/* 
 PS E:\culture\Professional\Project\C_project\c_reinforce\vs_project\text\Array> .\a.exe ab ff ds
argc = 4
E:\culture\Professional\Project\C_project\c_reinforce\vs_project\text\Array\a.exe
ab
ff
ds
 */

//argc:传参个数（包括可执行程序）
//grgv:指针数组，指向输入的参数
int main(int  argc , char *argv[])  //操作系统调用此函数, 
{
    //指针数组，每个元素都是指针的数组
    //[]比*的优先级高
    char *a[] = {"aaaaaaa","bbbbbb","ccccccc"};
    int i = 0;

    printf("argc = %d\n",argc);

    for(i = 0 ; i < argc ; i++)
    {
        printf("%s\n" , argv[i]);
    }
 

    printf("\n");
    system("pause");

}