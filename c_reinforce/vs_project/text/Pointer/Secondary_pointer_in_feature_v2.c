#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "E:\culture\Professional\Project\C_project\zxl\zxl.h"  //双引号有限从源文件所在位置开始查找


int Sequence(char a[][30] , int number)
{
    int i=0,j=0;
    char tmp[30];
    if(a == NULL || number ==0)
    {
        return -1;
    }

    for(i= 0 ; i < number-1; i++)
    {
        for(j = i+1; j < number; j++)
        {
            if( strcmp(a[i],a[j]) > 0 )
            {
                strcpy(tmp,a[i]);
                strcpy(a[i] , a[j]);
                strcpy(a[j] , tmp);
            }
        }
    }

    return 0;
}

void print_array(char a[][30] , int number)
{
    int i = 0;
    for(i= 0 ; i< number; i++)
    {
        printf("%s\n",a[i]);
    }
    printf("\n");
}

void print_array2_err(char **a , int number)
{
    int i = 0;
    for(i= 0 ; i< number; i++)
    {
        printf("%s\n",a+i);
    }
}


int main(void)
{

    //每个类型都是char*
    char a0[30]="11111111";
    char a1[30]="00000000";
    char a2[30]="aaaaaaaa";
    //二维数组的a代表首行地址，步长为列宽,*a为首行首元素地址，
    char a[3][30]={"11111111","00000000","aaaaaaaa"};

    printf("*(a+1) = %s\n",(a+1));

    print_array(a , sizeof(a)/sizeof(a[0]));
    Sequence(a , sizeof(a)/sizeof(a[0]));
    print_array(a , sizeof(a)/sizeof(a[0]));

    printf("\n");
    system("pause");

}