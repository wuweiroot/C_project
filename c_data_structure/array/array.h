#ifndef _ARRAY_H
#define _ARRAY_H

#include <stdio.h>
#include <malloc.h>  //包含了malloc函数
#include <stdlib.h>  //包含了exit函数
#include <stdbool.h> //包含bool函数
#include "is.h"

struct Arr
{
    int* pBase;     //储存数组的首地址
    int len;        //数组的长度
    int cnt;         //当前数组有效元素的个数
};



#endif