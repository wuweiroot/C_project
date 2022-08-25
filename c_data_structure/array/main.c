#include "array.h"

#define arr_len   3


void init_arr(struct Arr *Parr, int len);
bool append_arr(struct Arr *Parr, int value);//追加
bool insert_arrbo(struct Arr* Parr, int i , int value ); //插入
bool sort_arr(struct Arr *Parr);//排序
void free_arr(struct Arr *Parr);//释放
int get();
bool delete_arr(struct Arr *Parr, int i, int* Pvalue); //删除
void delete_arr_plus(struct Arr *Parr, int i, int* Pvalue); //删除
void show_arr(struct Arr* arr);
void inversion_arr(struct Arr *Parr); //反置



int main()
{
    struct Arr array;
    struct Arr * p_arr = &array;
    int value;
    init_arr(p_arr, arr_len); //show_arr(p_arr);

    append_arr(p_arr, 12);show_arr(p_arr);
    append_arr(p_arr, 76);show_arr(p_arr);
    insert_arrbo(p_arr, 2, 666);show_arr(p_arr);
    delete_arr_plus(p_arr, 1 , &value);show_arr(p_arr);
    inversion_arr(p_arr);show_arr(p_arr);
    free_arr(p_arr);show_arr(p_arr);

    return 0;
}



 void init_arr(struct Arr* Parr, int len)
{
    Parr->pBase = (int*)malloc( sizeof(int)*len );
    if(NULL == Parr->pBase)
    {
        printf("分配动态内存失败\n");
        exit (-1);  //终止程序
    }
    else
    {
        Parr->len = len;
        Parr->cnt = 0;
    }
    return;
} 

void show_arr(struct Arr* Parr)
{
    if(is_empty(Parr))
    {
        printf("数组为空\n");
    }   
    else
    {
		int i = 0;
        for (i = 0; i < Parr->cnt; ++i)
            printf("%d ", Parr->pBase[i]);
        printf("\n");
    }
}

bool append_arr(struct Arr* Parr , int value)//追加
{
   if(is_full(Parr))
   {
       printf("数组已满\n");    
       return false;
   } 
   else
   {
       Parr->pBase[Parr->cnt] = value;
       Parr->cnt++;
       return true;
   }      
} 

bool insert_arrbo(struct Arr* Parr, int i , int value ) //插入  
{
    if(is_full(Parr))
    {
        printf("数组已满\n");    
        return false;
    } 
    else if(i > Parr->len-1 || i < 0)
    {
        printf("超出范围!\n");
        return false;
    }
    else 
    {
        int cnt_copy = Parr->cnt;
        for (; cnt_copy >= i ; cnt_copy--)
        {
            Parr->pBase[cnt_copy + 1] = Parr->pBase[cnt_copy];
        }
         Parr->pBase[cnt_copy+1] = value;
         Parr->cnt++;
         return true;
    }
} 
bool delete_arr(struct Arr* Parr, int i,int* Pvalue)
{
    if(is_empty(Parr))
    {
        printf("数组为空\n");    
        return false;
    }
    if(i > Parr->len-1 || i < 0)
    {
        printf("超出范围!\n");
        return false;
    }
    *Pvalue = Parr->pBase[i];
    for (; i < Parr->cnt-1 ; i++)
    {
        Parr->pBase[i] = Parr->pBase[i+1];
    }
    Parr->cnt--;
    return true;
}

void inversion_arr(struct Arr* Parr)
{  
     #if 0 
        struct Arr Arr_reverse;
        init_arr(&Arr_reverse, 3);
        struct Arr* P_Arr_reverse = &Arr_reverse;
        int i;
        for (i = 0; i < Parr->cnt ; i++)
        {
            P_Arr_reverse->pBase[Parr->cnt-i-1] = Parr->pBase[i];
        }
        for (i = 0; i < Parr->cnt ; i++)
        {
            Parr->pBase[i]= P_Arr_reverse->pBase[i];
        }
    #else if 1
        int i,j=Parr->cnt-1;
        for (i = 0; i < j; )
        {
            int t;
            t = Parr->pBase[i];
            Parr->pBase[i] = Parr->pBase[j];
            Parr->pBase[j] = t;
            i++;
            j--;
        }
    #endif

}
void free_arr(struct Arr* Parr)
{
    free (Parr->pBase);
}

void delete_arr_plus(struct Arr* Parr, int i,int* Pvalue)
{
    if( delete_arr(Parr, i, Pvalue) )
    {
        printf("删除成功!\n");
        printf("你删除的数字是%d\n", *Pvalue);
    }
    else
    {
        printf("删除失败!\n");
    }
}