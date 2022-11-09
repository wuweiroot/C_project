#include <stdio.h>
long *sp1;
long *spm;

extern sw(long *,long *);

void fun()
{
    while (1)
    {
        printf("fun\n");
        sw(spm,&sp1);
    }
    return;
}

int main()
{
    long stack[1000];
    sp1 = stack + 999;
    *sp1 = (long)fun;

    while(1)
    {
        printf("main\n");
        sw(sp1,&spm);
    }
    return 0;

}