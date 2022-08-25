#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *get_str1()
{
    char *p="abcde"; //文字常量区
    return p;
}
char *get_str2()
{
    char *q="abcde"; //文字常量区
    return q;
}

int main(void)
{
    char *p = NULL;
    char *q = NULL;

    p = get_str1();
    printf("p=%s , p=%d\n", p , p);
    
    q = get_str2();
    printf("q=%s , q=%d\n", q , q);

    printf("\n");
    system("pause");

}