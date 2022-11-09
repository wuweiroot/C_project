#include <stdio.h>
#include <stdlib.h>
#include <string.h> //尖括号优先从库中查找

//#include "E:\culture\Professional\Project\language_C\vs_project\text\Pointer\a.h"
#include "..\..\..\zxl\zxl.h"
//#include "E:\culture\Professional\Project\language_C\zxl\zxl.h"  //双引号有限从源文件所在位置开始查找


//传出申请的地址空间的地址
int Get_Mem_string(OUT char**p)
{

    if(p == NULL)
    {
        return -1;
    }
    char *tmp = (char*)malloc(sizeof(char)*100);
    strcpy(tmp,"abcdef");
    *p = tmp;

    return 0;
}

int main(void)
{
    char *p = NULL;
    int state = 0;

    //申请一块内存，写入字符串，将内存的首地址传递给p
    state = Get_Mem_string(&p);
    if(!state)
    {
        printf("%s",p);
    }

    if(p != NULL)
    {
        free(p);
        p =NULL;
    }

    printf("\n");
    system("pause");

}