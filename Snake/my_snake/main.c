

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

#define High  14
#define Width 60


typedef struct position
{
    int x;//�?坐标
    int y;//纵坐�?
} positions;

positions position;

typedef struct Snake//�?
{
    /*用数组储存蛇的每一部分的坐�?*/
    positions body[100];
    int len;//长度
    char direction;
    int speed;//速度
} Snakes;
Snakes snake;

void Snake_init();
void Snake_Show(positions position[],int len);
void Snake_Show_init(positions position[],int len);
void map_init();
void gotoxy(int x,int y);
void Snake_Update(Snakes snake,char direction);


int main()
{ 
    system("cls");
    Snake_init();
    map_init();


    while(0)
    {
        //snake.body[0].x ++;

        Snake_Update(Snakes snake , char direction);
        Snake_Show(snake.body,snake.len);
        Sleep(snake.speed);

    }

    gotoxy(High+1,0);
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
    用�?�结构体来储存坐�?
    */
    hout=GetStdHandle(STD_OUTPUT_HANDLE);//从标准输出�?��?�中取得一�?句柄
    /*这其中x,y的赋值�?�象要注�?,不懂的好好想�?*/
    cor.X=y;
    cor.Y=x;
    SetConsoleCursorPosition(hout,cor);//定位光标的函�?
}
void Snake_Update(Snakes snake , char direction)
{
    switch (direction)
    {
    case 'w':
        if(snake.direction == 'a' || snake.direction == 'd'){
            snake.body[0].x++;
        }    
        break;
    case 's':
       if(snake.direction == 'a' || snake.direction == 'd'){
            snake.body[0].x--;
        }  
        break;
    case 'a':
       if(snake.direction == 'w' || snake.direction == 's'){
            snake.body[0].y--;
        }  
        break;        
    case 'd':
        if(snake.direction == 'w' || snake.direction == 's'){
            snake.body[0].y++;
        }  
        break;

    default:
        break;
    }
}

void map_init()
{

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

void Snake_Show_init(positions position[],int len)
{
    for (size_t i = 0; i < len; i++)
    {
        gotoxy(position[i].x , position[i].y);
        printf("*");
    }

}

void Snake_Show(positions position[],int len)
{
    //map_init();
    for (size_t i = 0; i < len; i++)
    {
        gotoxy(position[i].x , position[i].y);
        printf("*");
    }
    gotoxy(position[len-1].x , position[len-1].y);
    printf(" ");

}

void Snake_init()
{
    snake.len = 3;
    snake.body[0].x = High/2;
    snake.body[0].y = Width/2;

    snake.body[1].x = High/2;
    snake.body[1].y = Width/2 - 1;

    snake.body[2].x = High/2;
    snake.body[2].y = Width/2 -2;

    snake.speed = 300;

    snake.direction = 'd';
    Snake_Show_init(snake.body , snake.len);
}

