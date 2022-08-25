#include <stdio.h>
struct Node{
    int data;               //数据域
    struct Node *next;      //指针域
};

int main()
{
    struct Node Node1 = {1, NULL}; //结构体类型 结构体名 结构体变量
    struct Node Node2 = {2, NULL};
    struct Node Node3 = {1, NULL};

    Node1.next = &Node2;
    Node2.next = &Node3;
    return 0;
}