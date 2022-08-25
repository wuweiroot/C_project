#include <stdio.h>

void f(int*);
void ff(int**);
void ff2(int**);

int main(void)
{
    int i = 9;
    int* p = &i;
 
    printf("%d ",*p); f(p);  printf("%d ",*p); ff2(&p);  printf("%d\n",*p);
    printf("%p ",p); ff(&p); printf("%p\n",p);

}

void f(int* p)
{
    *p=123;
}
void ff2(int** p)
{
    **p=124;
}

void ff(int** p)
{
    *p=92556;
}