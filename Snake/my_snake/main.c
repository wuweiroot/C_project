

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

#define High  14
#define Width 60


typedef struct position
{
    int x;//横坐标
    int y;//纵坐标
} positions;

positions position;

struct Snake//蛇
{
    /*用数组储存蛇的每一部分的坐标*/
    positions body[100];
    int len;//长度
    int speed;//速度
} snake;

void Snake(positions position);
void Snake_init();
void Snake_Show(positions position);
void Snake_Show_init();
void map_init();
void gotoxy(int x,int y);


int main()
{ 
    Snake_init();
    map_init();
    Snake_Show_init();

    while(1)
    {
        snake.body[0].x ++;
  
        Snake_Show(snake.body[0]);
        Sleep(snake.speed);

    }
    
}

void gotoxy(int x,int y)
{
    HANDLE hout;
    COORD cor;
    /*
    typedef struct _COORD
    {
        SHORT X; // horizontal coordinate
        SHORT Y; // vertical coordinate
    } COORD;
    用该结构体来储存坐标
    */
    hout=GetStdHandle(STD_OUTPUT_HANDLE);//从标准输出设备中取得一个句柄
    /*这其中x,y的赋值对象要注意,不懂的好好想想*/
    cor.X=y;
    cor.Y=x;
    SetConsoleCursorPosition(hout,cor);//定位光标的函数
}


void map_init()
{
    system("cls");

    for (size_t i = 0; i < Width; i++)
    {
        gotoxy(0,i);
        printf("#");
    }
    for (size_t i = 0; i < Width; i++)
    {
        gotoxy(High,i);
        printf("#");
    }
    
    for (size_t i = 0; i < High; i++)
    {
        gotoxy(i,0);
        printf("#");
    }

    for (size_t i = 0; i < High; i++)
    {
        gotoxy(i,Width);
        printf("#");
    } 


}

void Snake_Show_init()
{
    gotoxy(position.x , position.y);
    printf("*");
    gotoxy(High+1,0);
    
}

void Snake_Show(positions position)
{
    //map_init();
    gotoxy(position.x , position.y);
    printf("*");
}

void Snake_init()
{
    snake.len = 1;
    snake.body[0].x = High/2;
    snake.body[0].y = Width/2;
    snake.speed = 300;
    

}



void Snake(positions position)
{

    Snake_Show(position);
    
    Sleep(snake.speed );

}
