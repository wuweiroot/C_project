#include<stdio.h>
//#include <unistd.h>
//希望在run的循环中，每间隔1秒运行一个函数，这个函数由main.c来指定（函数实体放在main.c中）

int (*step)(int)=NULL; //定义一个函数指针，在循环里运行
//extern void cb_install(void (*p)(void));

//无线运行的函数。每秒ct自增加一，可以认为是算秒的函数
void run(int*p)
{
    int ct = 0;
    step = (int (*)(int))p;
    while (1)
    {
        if(step!=NULL)
        {
            int r=step(ct);
            printf("r = %d\n",r);
        }
        ct++;
        //sleep(1);
    }
    
}


void cb_install(int (*p)(int))
{
    step=p;
}
