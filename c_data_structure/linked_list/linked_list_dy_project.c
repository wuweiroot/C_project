#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[20];
    int num;
    int math;
};

struct Node{
    struct student data;               //数据域
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
struct Node* createNote(struct student data)
{
    struct Node *newNote = (struct Node *)malloc(sizeof(struct Node)); //定义指向结构体变量的指针
    newNote->data = data;
    newNote->next = NULL;
    return newNote;
}
//头插法插入节点，参数：插入那个函数，插入节点的数据是多少
void insertNodeByHead(struct Node* headNode, struct student data)
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
        printf("name\tnum\tmath\n");
        printf("%s\t%d\t%d\n", pMove->data.name,pMove->data.num, pMove->data.math);
        pMove = pMove->next;
    }
    printf("\n");
}
//删除节点，指定位置删除
void deleteNodeByAppoinnum(struct Node* headNode, int num)
{
    struct Node* posNode = headNode->next;
    struct Node *posNodeFront = headNode;
    if(headNode == NULL)
        printf("链表为空无法删除\n");
    else
    {
        while(posNode->data.num != num)
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
    struct student info;
    while(1)
    {
        printf("请输出学生的姓名 学号 数学成绩\n");
       // setbuf(stdin, NULL);
        scanf("%s %d %d",&info.name,&info.num,&info.math);
        insertNodeByHead(List, info);
        printf("continue(Y/N)?\n");
       // setbuf(stdin, NULL);
        char choice = 0;
        scanf("%s", &choice);
     //   int choice = getchar();
        if(choice=='n' || choice=='N')
        {
            break;
        }
            
    }
    printfList(List);
    printf("请输入要删除学生的学号:\n");
    scanf("%d", &info.num);
    deleteNodeByAppoinnum(List, info.num);
    printfList(List);
    system("pause"); 
    return 0;
}