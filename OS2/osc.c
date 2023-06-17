#include <stdio.h>
long long *sp1;    //指向fun函数
long long *spm;   //指向main函数

//64位系统，地址宽度为8个字节
//rdi rsi函数第1 2参数 sw(sp1,spm)

extern void sw(long long *,long long **);

void fun()
{
    while (1)
    {
        printf("fun\n");
        sw(spm,&sp1); //把当前sp记录在sp1变量中，将sp指针指向spm(main函数)
    }
    return;
}

int main()
{
    long long stack[1000];
    sp1 = stack + 999;
    *sp1 = (long long)fun;

    while(1)
    {
        printf("main\n");
        printf("sp1 = %p\n",sp1);
        sw(sp1,&spm);  //把当前sp记录在spm变量中，将sp指针指向fun函数地址

        printf("main_sw\n");
        printf("sp1_2 = %p\n",sp1);
    }

    printf("main2\n");
    return 0;

}