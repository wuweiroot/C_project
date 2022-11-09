#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "E:\culture\Professional\Project\language_C\zxl\zxl.h"  //双引号有限从源文件所在位置开始查找
#include ".\zxl.h"

/* 
   打印输出数组元素
*/
void printf_list(IN int *a, IN int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", a[i]);
    }
}

/*
    交换两个变量的值
*/
void Exchange(IN int *a, IN int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

/* 
    01 排序算法：
       001 选择排序：
       002 冒泡排序：
       003 插入排序：
       004 希尔排序：
       005 折半查找： 
 */

/* 
    001 选择排序：
    选择排序(Selection sort)是一种简单直观的排序算法。它的工作原理如下。首先在未排序序列中找到最小元素,存放到排序序列的起始位置,然后,再从剩余未排序元素中继续寻找最小元素,然后放到排序序列末尾。以此类推,直到所有元素均排序完毕
*/

void select_sort(IN int numbers[], IN int length)
{

    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            if (numbers[i] > numbers[j])
            {
                Exchange(&numbers[i], &numbers[j]);
            }
        }
    }
}

    /* 
    002 冒泡排序：
    冒泡排序(Bubble Sort)是一种简单的排序算法。它重复 地走访过要排序的数列,一次比较两个元素,如果他们的顺序错误就把他们交换过来。走访数列的工作是重复地进行直到没有再需要交换,也就是说该数列已经排序完成。这个算法的名字由来是因为越小的元素会经由交换慢慢“浮”到数列的顶端。

 */


void Bubble_Sort(IN int numbers[], IN int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                Exchange(&numbers[j], &numbers[j + 1]);
            }
        }
    }
}

int main(void)
{
    int numbers[5] = {2, 3, 1, 4, 0};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    //Bubble_Sort(numbers, length);
    select_sort(numbers, length);
    printf_list(numbers, length);

    return 0;
}