#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *get_str2()
{   
    char *tem = (char *)malloc(100);
    if(tem == NULL)
    {
        return NULL;
    }
    strcpy(tem,"abcdef");
    printf("tem = %s\n",tem); 
    return tem;
}

int main(void)
{
    int a=1,b=2;
    char buffer[128] = {0};
    char *p = NULL;
    p = get_str2();
    if(p != NULL)
    {
         printf("P = %s\n",p); 
         free(p);
         p = NULL;
    }
    printf("a=%d,b=%d\n",a,b);
    printf("&a=%p,&b=%p\n",&a,&b);

    printf("\n");
    system("pause");

}