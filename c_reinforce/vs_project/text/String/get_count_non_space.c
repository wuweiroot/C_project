#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <ctype.h>

#define IN
#define OUT

int no_space_str_number(IN char* p , OUT int* n)
{
    int state=0;
    int begin = 0;
    int end = strlen(p)-1;
    if(p==NULL || n ==NULL)
    {
        state = -1;
    }

    //从左边开始
    //如果当前字符为空，且没有结束
    while (isspace(p[begin]) && p[begin]!=0 )
    {
        begin++;  //位置往右移动一位
    }

     while (isspace(p[end]) && p[end]!=0 )
    {
        end--;
    }
    *n = end - begin + 1;

    return state;
}

int my_strcpy(IN char*p , OUT char*tem)
{
    int state = 0;
    int begin = 0;
    int end = strlen(p)-1;
    int n = 0;
    if(p==NULL || tem ==NULL)
    {
        state = -1;
    }
    
    while (isspace(p[begin]) && p[begin]!=0 )
    {
        begin++;  //位置往右移动一位
    }

     while (isspace(p[end]) && p[end]!=0 )
    {
        end--;
    }
    n = end - begin + 1;
    strncpy(tem,p+begin,n);
    return state;
}

int main(void)
{
    char *p = "     abcdef       ";
    int n = 0;
    int state = 0;
    char tem[100] = {0};

    state = no_space_str_number(p , &n);
    if(state)
    {
        printf("no_space_str_number error:state = %d",state);
    }
    printf("n=%d\n",n);

    state = my_strcpy(p,tem);
    if(state)
    {
        printf("my_strcpy error:state = %d",state);
    }  
    printf("tem = %s\n",tem);
    
    printf("\n");
    system("pause");

}