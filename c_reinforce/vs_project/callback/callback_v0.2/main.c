#include<stdio.h>
//#include <unistd.h>

//先声明再使用
//extern  void (*step)(void); //v1.0 code
extern void cb_install(int (*p)(int));

int mystep_cb(int i)
{
    printf("second has passed %d\n",i);
    return 2022;
}



int main()
{
    //step=mystep_cb;  //v1.0 code
    //cb_install(mystep_cb);
    run(mystep_cb);
}
