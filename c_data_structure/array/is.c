#include "array.h"

bool is_empty(struct Arr* arr)
{
    if(arr->cnt == 0)
        return true;
    else
        return false;
}

bool is_full(struct Arr* arr)
{
    if(arr->cnt == arr->len)
        return true;
    else
        return false;
}

