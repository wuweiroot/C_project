#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int a;      //告诉编译器，分配四个字节
    char b[10];  //告诉编译器，分配4*10个字节 int->char
    /* 
        类型的本质，固定内存块大小别名
        可以通过sizeof（）测试
     */
    printf("sizeof(a) = %d, sizeof(b) = %d\n",sizeof(a),sizeof(b) );

    //打印地址
    printf("b:%d , &d:%d\n", b, &b);

    //b &b 的数组类型不一样
    //b 数组首元素地址， 一个元素4字节， +1  +4
    //&b 整个数组的首地址， 一个数组4*10=40字节 +1 +40
    printf("b+1:%d , &d+1:%d\n", b+1, &b+1);

    //指针类型长度，32位程序， 长度4
    //             64为程序  长度8
    char ****p=NULL;
    int *c=NULL;
    printf("%d %d \n",sizeof(p),sizeof(c));

    for(int i=0; i<10; i++)
    {
        printf("%d\n",&b[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}