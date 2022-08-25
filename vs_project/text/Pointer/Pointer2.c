#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main0(void)
{

    char *p =NULL;
    char buf[1000] = "abcdefg";
    p = &buf[0];
    printf("P=%d  %c\n",p,*p);

    p = &buf[1];

    printf("p=%d  %c\n",p,*p);

   
    printf("\n");
    system("pause");
}



int main1(void)
{
    int a = 0;
    int *p1 = NULL;
    int **p2 = NULL;
    
    p1 = &a;
    p2 = &p1;
    
    //打印定义变量地址
    printf("%p\n",&a);
    printf("%p\n",&p1);
    printf("%p\n",&p2);
    printf("\n");
    //打印指针变量存储内容
    printf("%16X\n",p1);
    printf("%16X\n",p2);
    printf("\n");
    //打印指针变量指向的内容
    printf("%X\n",a);
    printf("%X\n",*p1);
    printf("%X\n",*p2);
    printf("%X\n",**p2);
    printf("\n");

    printf("\n");
    system("pause");

}



int main2(void)
{
    int a;      //告诉编译器，分配4个字节
    char b;     //告诉编译器，分配1个字节

    int aa[5];  // 告诉编译器，分配4*5个字节
    char bb[5];  //告诉编译器，分配1*5个字节 

    /* 
        指针类型大小跟地址线宽度有关，32位机，分配4byt
    */
    int *p1;    //告诉编译器，分配四个字节 p1 指向int 类型的数据
    char *p2;   //告诉编译器，分配四个字节 p2 指向char 类型的数据   64bit/8bit = 8byt
    
    /* 
        类型的本质，固定内存块大小别名
        可以通过sizeof（）测试
     */
    printf("sizeof(a) = %d, sizeof(b) = %d\n",sizeof(a),sizeof(b) );
    printf("sizeof(p1) = %d, sizeof(p2) = %d\n",sizeof(p1),sizeof(p2) );
    printf("\n");

    for(int i=0; i<5; i++)
    {
        printf("&aa[%d]:%p\n",i,&aa[i]);
    }
    printf("\n");

    for(int i=0; i<5; i++)
    {
        printf("&bb[%d]:%p\n",i,&bb[i]);
    }
    printf("\n");
    
    printf("\n");
    system("pause");
    return 0;
}

int main3(void)
{
    int a;      //告诉编译器，分配4个字节
    char b;     //告诉编译器，分配1个字节

    int aa[5];  // 告诉编译器，分配4*5个字节
    char bb[5];  //告诉编译器，分配1*5个字节 

    /* 
        指针类型大小跟地址线宽度有关，32位机，分配4byt
    */
    int *p1;    //告诉编译器，分配四个字节 p1 指向int 类型的数据
    char *p2;   //告诉编译器，分配四个字节 p2 指向char 类型的数据   64bit/8bit = 8byt

    p1 = aa;

    for(int i=0; i<5; i++)
    {
        *(p1+i)=i;
        printf("%d\n",*(p1+i));
    }   
    printf("\n");

    p2 = bb; 

    for(int i=0; i<5; i++)
    {
        *(p2+i)=i;
        printf("%d\n",*(p2+i));
    }   

    

    printf("\n");
    system("pause");
    return 0;
}

int main(void)
{
    int a;      //告诉编译器，分配4个字节
    char b;     //告诉编译器，分配1个字节

    a = 0;
    b= 0xFF;  
    //a = 0x100; //警告：从“int”到“char”的转换溢出将值从“256”更改为“0”
    b = 0x100;  


    printf("\n");
    system("pause");
    return 0;
}