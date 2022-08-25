#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;               //数据域
    struct Node *next;      //指针域
};
//创建链表
struct Node* createList()
{
    struct Node *headNode = (struct Node *)malloc(sizeof(struct Node)); //定义指向结构体变量的指针
    //headNode->data = 1;
    headNode->next = NULL;
    return headNode;
}
//创建节点
struct Node* createNote(int data)
{
    struct Node *newNote = (struct Node *)malloc(sizeof(struct Node)); //定义指向结构体变量的指针
    newNote->data = data;

    newNote->next = NULL;
    return newNote;
}
//头插法插入节点，参数：插入那个函数，插入节点的数据是多少
void insertNodeByHead(struct Node* headNode, int data)
{
    //1.创建插入的节点
    struct Node* newNode = createNote(data);
    newNode->next = headNode->next;  //先连接后面
    headNode->next = newNode;        //
}
//打印链表
void printfList(struct Node* headNode)
{
    struct Node *pMove = headNode->next;
    while(pMove)
    {
        printf("%d", pMove->data);
        pMove = pMove->next;
    }
    printf("\n");
}
//删除节点，指定位置删除
void deleteNodeByAppoin(struct Node* headNode, int posData)
{
    struct Node* posNode = headNode->next;
    struct Node *posNodeFront = headNode;
    if(headNode == NULL)
        printf("链表为空无法删除\n");
    else
    {
        while(posNode->data != posData)
        {
            posNodeFront = posNode;
            posNode = posNode->next;
            if(posNode==NULL)
            {
                printf("未找到相关信息，无法删除\n");
                return;
            }
            posNodeFront->next = posNode->next;
            free(posNode);
        }


    }
}

int main()
{
    struct Node* List = createList();
    insertNodeByHead(List, 1);
    insertNodeByHead(List, 2);
    insertNodeByHead(List, 3);
    printfList(List);
    deleteNodeByAppoin(List, 2);
    printfList(List);
    system("pause");
    return 0;
}