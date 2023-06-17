
// ./ 当前目录 screen文件夹和main.c在同一级目录
// ../ 当前目录的上一层目录 main.c 的上一层目录是 snake

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
//#include "E:\culture\Professional\Project\C_project\Snake\my_snake\screen\screen.h"
#include ".\screen\screen.h"  
#include "main.h"



void Snake_init();
void Snake_Update_By_Move(Snakes* psnake,char direction);
void Snake_Update_By_Food(void);


int main()
{ 
    char  direction;

    system("cls");
    Snake_init();
    map_init();


    while(1)
    {
        //snake.body[0].x ++;
        direction = snake.direction;
        while(kbhit())//键盘有输入
        {
            direction=getch();
        }

        
        Snake_Update_By_Move(&snake,direction);
        Snake_Update_By_Food();
        Snake_Show(snake.body,snake.len);
        
        Sleep(snake.speed);//延时
        Snake_clean(snake.body,snake.len);

    }

    gotoxy(0,High+1);
}

void Snake_init()
{
    snake.len = 4;
    snake.body[0].x = Width/2;
    snake.body[0].y = High/2;

    snake.body[1].y = High/2;
    snake.body[1].x = Width/2 - 1;

    snake.body[2].y = High/2;
    snake.body[2].x = Width/2 -2;

    snake.body[3].y = High/2;
    snake.body[3].x = Width/2 -3;

    snake.speed = 300;

    snake.direction = 'd';
   // Snake_Show_init(snake.body , snake.len);
}

void Snake_Update_By_Food(void)
{

    if(snake.body[0].x == food.x && snake.body[0].y == food.y){
        snake.len ++;
        for (size_t i = snake.len ; i > 0 ; i--)
        {
            snake.body[i] = snake.body[i-1];
        }
        snake.body[0] = food;

        food.x=rand()%(Width-2)+1;
        food.y=rand()%(High-2)+1;//在框内
        gotoxy(food.x ,food.y);
        printf("*");
    }
    

}

void Snake_Update_By_Move(Snakes* psnake , char direction)
{
    int direction_change = 0;
    //updata body
    for (size_t i = snake.len ; i > 0 ; i--)
    {
        snake.body[i] = snake.body[i-1];
    }
    

    
    //updata hard
    switch (direction)
    {
    case 'w':
        if(snake.direction == 'a' || snake.direction == 'd'){
            snake.body[0].y--;
            direction_change = 1;
        }    
        break;
    case 's':
       if(snake.direction == 'a' || snake.direction == 'd'){
            snake.body[0].y++;
            direction_change = 1;
        }  
        break;
    case 'a':
       if(snake.direction == 'w' || snake.direction == 's'){
            snake.body[0].x--;
            direction_change = 1;
        }  
        break;        
    case 'd':
        if(snake.direction == 'w' || snake.direction == 's'){
            snake.body[0].x++;
            direction_change = 1;
        }  
        break;

    default:
        break;
    }

    if(direction_change == 1){
      snake.direction = direction;
    }else{
        switch (snake.direction)
        {
        case 'w':
            snake.body[0].y--;
            break;
        case 's':
            snake.body[0].y++;
            break;
        case 'a':
            snake.body[0].x--;
            break;
        case 'd':
            snake.body[0].x++;
            break;
        
        default:
            break;
        }
    }


}