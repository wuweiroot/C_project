#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/* 
C语言没有字符串类型，可以通过字符数据模拟
C语言字符串，以字符“\0” , 数字 0
 */

int main0(void)
{
    //不指定长度,没有0结束符，有多少元素就有多长
    char buf[] = {'a','b','c'};
    printf("buf = %s\n",buf);

    //指定长度，后面没有赋值元素，自动补零
    char buf2[100] = {'a','b','c'};
    printf("buf2 = %s\n",buf2);

    //所有元素赋值为 0 
    char buf3[100]={0};

    char buf4[100] = {'a','\0','c'};
    char buf5[100] = {'a',0,'c'};
    printf("buf4 = %s  buf5 = %s \n",buf4,buf5);

    //常用使用字符串初始化
    char buf6[]="abcdef";
    //strlen:测字符串长度，不包含\0或者数字0
    //sizeof:测字符长度。包含\0或者数字0
    printf("strlen = %d , sizeof = %d\n",strlen(buf6),sizeof(buf6));

    char buf7[100]="abcdef";
    printf("strlen = %d , sizeof = %d\n",strlen(buf7),sizeof(buf7));

    char buf8[] = "\0129";
    printf("buf8 = %s\n",buf);

    printf("\n");
    system("pause");

}



int main1(void)
{
    char buf[]="abcdef";
    int i =0;
    char *p=NULL;
    //数组方式
    for (size_t i = 0; i < strlen(buf); i++)
    {
        /* code */
        printf("%c",buf[i]);
    }
    printf("\n");

    //指针方式
    //数组名字，数组元素首地址
    p = buf;
    for (size_t i = 0; i < strlen(buf); i++)
    {
        /* code */
       // printf("%c",p[i]);
        printf("%c",*(p+i));
    }
    printf("\n");

    for (size_t i = 0; i < strlen(buf); i++)
    {
        /* code */
        printf("%c",*(buf+i));
    }
    printf("\n");
    
    //buf和p完全等级吗
    //p++;
    //buf++;
    //buf只是一个常量，不能改变

    
    printf("\n");
    system("pause");

}

void my_strcpy(char*dst,char*str)
{
    int i = 0;
    for (; i != '\n'; i++)
    {
        /* code */
        *(dst+i) = *(str+i);
    }
    *(dst+i)='\n';

}

void my_strcpy2(char*dst,char*str)
{
    while (*str != 0)
    {
        *dst++ = *str++;
        //dst++;
        //str++;
    }
    *dst = 0;  
}

void my_strcpy3(char*dst,char*str)
{
    while (*dst++ = *str++);
}

int my_strcpy4(char*dst,char*str)  //返回值是数字函数类型不能再用void
{
    if(dst == NULL || str == NULL) return -1;
    while (*dst++ = *str++);
    
    printf("my_strcpy4:dst = %s",dst); //dst为函数内定义的形参指针变量，此时指针已经指向字符串的结尾
    return 0;
}

//成功为0，失败非0
//1 判断形参指针是否为NULL
//2 不要直接使用形参
int my_strcpy5(char*dst,char*str)  //返回值是数字函数类型不能再用void
{
    char*to=dst;  //赋值变量
    char*form=str;
    if(dst == NULL || str == NULL) return -1;
    while (*to++ = *form++);
    
    printf("my_strcpy4:dst = %s\n",dst); //dst为函数内定义的形参指针变量
    return 0;
}


int main(void)
{

    char str[] = "abcdef";
    char dst[] = {0};
    int ret = 0;

    ret = my_strcpy5(dst,str);
    if(ret != 0)
    {
        printf("my_strcpy4 err:%d",ret);
    }
    printf("dst=%s",dst);
    
    printf("\n");
    system("pause");

}