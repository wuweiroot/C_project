#include"stdio.h"
 
int main()
{
    int pf(int x);
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    pf(x);
    pf(y);
    pf(z);
    return 0;
}
 
    int pf(int x)
{
        printf("%-9d%-9d%-9d\n",x,x*x,x*x*x);
}