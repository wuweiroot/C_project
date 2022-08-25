#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define IN
#define OUT

/* 
strstr(p,"abcd") //找到p指向的字符串中abcd的首地址，返回该地址;找不到返回NULL
 */

int main0(void)
{
    char *p = "11abcd111122abcd3333322abcd3333322qqq";
    int n = 0;

    do
    {
        p=strstr(p,"abcd");
        if (p != NULL)
        {
            n++;
            //重新设置查找起点
            p = p + strlen("abcd");
        }
        
        else 
        {
            break; //无匹配字符串，跳出循环
        }
        
    } while ( *p != 0 );

    printf("n = %d\n",n);
    
    printf("\n");
    system("pause");

}

int main2(void)
{
    char *p = "11abcd111122abcd3333322abcd3333322qqq";
    int n = 0;

    while (p=strstr(p,"abcd")) //能进来，肯定有匹配的字符串
    {
        if(*p == 0) break;
        p = p + strlen("abcd");
        n++;
    }
    
    printf("n = %d\n",n);
    
    printf("\n");
    system("pause");

}

int my_strstr(IN char*p , OUT int*n)
{
    int i = 0;
    char *tmp = p;

    while (tmp = strstr(tmp,"abcd")) //能进来，肯定有匹配的字符串
    {
        if(*tmp == 0)
        {
            break;
        } 
        tmp = tmp + strlen("abcd");
        i++;
    }
    *n = i;
    return 0;
    

}

int main(void)
{
    char *p = "11abcd111122abcd3333322abcd3333322qqq";
    int n = 0;
    int ret = 0;

    ret = my_strstr(p , &n);
    if(ret)
    {
        return ret;
    }   
    printf("ret = %d\n",ret);
    printf("n = %d\n",n);
    
    printf("\n");
    system("pause");

}