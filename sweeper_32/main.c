//���ӷ�ʽ ����ο�interface.h�ļ�
//����Դ����Դ����--������24Сʱ��ɾ��
#include "stm32f10x.h"
#include "interface.h"
#include "LCD1602.h"
#include "IRCtrol.h"
#include "motor.h"
#include "UltrasonicCtrol.h"
#include "redvoid.h"
#include "uart.h"

//ȫ�ֱ�������
unsigned int speed_count=0;//ռ�ձȼ����� 50��һ����
char front_left_speed_duty;
char front_right_speed_duty;
char behind_left_speed_duty;
char behind_right_speed_duty;

char motor_clean_f_speed_duty;
char motor_clean_b_speed_duty;

unsigned char tick_5ms = 0;//5ms����������Ϊ�������Ļ�������
unsigned char tick_1ms = 0;//1ms����������Ϊ����Ļ���������
unsigned char tick_200ms = 0;//ˢ����ʾ

char ctrl_comm = COMM_STOP;//����ָ��
char ctrl_comm_last = COMM_STOP;//��һ�ε�ָ��
unsigned char continue_time=0;
unsigned char bt_rec_flag=0;//�������Ʊ�־λ


int a,b;

int main(void)
{
	delay_init();
	GPIOCLKInit();
	UserLEDInit();
//	LCD1602Init();
	IRCtrolInit();
	TIM2_Init();
	MotorInit();
	UltraSoundInit();
	RedRayInit();
	ServoInit();
	USART3Conf(9600);
	
	
 while(1)
 {	 
	 
	 while(b)  {  LED_SET; Motor_Clean(a);VoidRun(40); }
	 //MOTOR_CLEAN_F;
		//Motor_Clean(40); //46--3.03V  , 50--3.3V  , 40--2.63
	 //	LED();
	 
	 		if(tick_5ms >= 5)
		{
			tick_5ms = 0;
			tick_200ms++;
			if(tick_200ms >= 40)
			{
				tick_200ms = 0;
				LEDToggle(LED_PIN);
			}
			continue_time--;//200ms �޽���ָ���ͣ��
			if(continue_time == 0)
			{
				continue_time = 1;
				CarStop(0);
				Motor_Clean(0);
			}
				
			//do something	
			//VoidRun();
			
			
				if(bt_rec_flag == 1 |ir_rec_flag == 1)//���յ������ź�
			{
				bt_rec_flag = 0;
				ir_rec_flag = 0;
			 
				
				switch(ctrl_comm)
				{
					case COMM_7:  		LED_SET;a=30;Motor_Clean(a);break;
					case COMM_8: 	 	LED_SET;a=40;Motor_Clean(a);break;
					case COMM_9:    	  LED_SET;a=46;Motor_Clean(a);break;
					
					case COMM_UP:     LED_SET;CarGo(40); Motor_Clean(a);   break;
					case COMM_DOWN:   LED_SET;CarBack(40); Motor_Clean(a);break;
					case COMM_LEFT:   LED_SET;CarLeft(40); Motor_Clean(a);break;
					case COMM_RIGHT:  LED_SET;CarRight(40); Motor_Clean(a);break;
					case COMM_STOP:   LED_SET;CarStop(0); Motor_Clean(a);break;
					
				//	case COMM_AUTO:   while(b)  {  LED_SET; Motor_Clean(a);VoidRun(40); }   break;
					
//					case COMM_7:  while( ctrl_comm!=(COMM_8|COMM_9) )  { Motor_Clean(28); } break;
//					case COMM_8:  while( ctrl_comm!=(COMM_7|COMM_9) )  { Motor_Clean(38); } break;
//					case COMM_9:  while( ctrl_comm!=(COMM_7|COMM_8) )  { Motor_Clean(48); } break;
					
					default : break;
				}
			}

		}
		
 }
}

