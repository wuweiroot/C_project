#include<stdio.h>

typedef struct 
{
    int hour;
    int minute;
    int second;
}TIME;


int main()
{
    TIME times;
    times.hour=1;
    times.minute=33;
    times.second=34;

    int a=33;
    char time[]={0};
    time[0]='0';  //a的值是33对应的ascll码是！，字符数组内的存在内容是以assll码的形式存储的
    time[1]= times.minute;
    time[2]=33;
    time[3]=a;
    //printf("hello world\n");
    printf("%s %s\n",time);
    return 0;
}
