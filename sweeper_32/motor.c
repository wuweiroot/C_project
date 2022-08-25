#include "motor.h"
#include "interface.h"
#include "stm32f10x.h"

//GPIO���ú���
void MotorGPIO_Configuration(void)
{		
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = FRONT_LEFT_F_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 	
	GPIO_Init(FRONT_LEFT_F_GPIO, &GPIO_InitStructure);    
	
	GPIO_InitStructure.GPIO_Pin = FRONT_LEFT_B_PIN;	
	GPIO_Init(FRONT_LEFT_B_GPIO, &GPIO_InitStructure); 
	
	GPIO_InitStructure.GPIO_Pin = FRONT_RIGHT_F_PIN;	
	GPIO_Init(FRONT_RIGHT_F_GPIO, &GPIO_InitStructure); 
	
	GPIO_InitStructure.GPIO_Pin = FRONT_RIGHT_B_PIN;	
	GPIO_Init(FRONT_RIGHT_B_GPIO, &GPIO_InitStructure); 
	
	GPIO_InitStructure.GPIO_Pin = BEHIND_LEFT_F_PIN;	
	GPIO_Init(BEHIND_LEFT_F_GPIO, &GPIO_InitStructure);  
	
	GPIO_InitStructure.GPIO_Pin = BEHIND_LEFT_B_PIN;	
	GPIO_Init(BEHIND_LEFT_B_GPIO, &GPIO_InitStructure);  
	
	GPIO_InitStructure.GPIO_Pin = BEHIND_RIGHT_F_PIN;	
	GPIO_Init(BEHIND_RIGHT_F_GPIO, &GPIO_InitStructure);  
	
	GPIO_InitStructure.GPIO_Pin = BEHIND_RIGHT_B_PIN;	
	GPIO_Init(BEHIND_RIGHT_B_GPIO, &GPIO_InitStructure); 


	
	GPIO_InitStructure.GPIO_Pin = MOTOR_CLEAN_F_PIN;	
	GPIO_Init(MOTOR_CLEAN_F_GPIO, &GPIO_InitStructure); 
	
	GPIO_InitStructure.GPIO_Pin = MOTOR_CLEAN_B_PIN;	
	GPIO_Init(MOTOR_CLEAN_B_GPIO, &GPIO_InitStructure);
	
	
	
}

//����ռ�ձ��������ת��
void CarMove(uint8_t SPEED_DUTY)
{   
	
	 BEHIND_RIGHT_EN;
	
 /* //��ǰ��
	if(front_left_speed_duty > 0)//��ǰ
	{
		if(speed_count < front_left_speed_duty)
		{
			FRONT_LEFT_GO;
		}else
		{
			FRONT_LEFT_STOP;
		}
	}
	else if(front_left_speed_duty < 0)//���
	{
		if(speed_count < (-1)*front_left_speed_duty)
		{
			FRONT_LEFT_BACK;
		}else
		{
			FRONT_LEFT_STOP;
		}
	}
	else                //ֹͣ
	{
		FRONT_LEFT_STOP;
	}*/
	
		//��ǰ��
	if(front_right_speed_duty > 0)//��ǰ
	{
		if(speed_count < front_right_speed_duty)
		{
			FRONT_RIGHT_GO;
		}else                //ֹͣ
		{
			FRONT_RIGHT_STOP;
		}
	}
	else if(front_right_speed_duty < 0)//���
	{
		if(speed_count < (-1)*front_right_speed_duty)
		{
			FRONT_RIGHT_BACK;
		}else                //ֹͣ
		{
			FRONT_RIGHT_STOP;
		}
	}
	else                //ֹͣ
	{
		FRONT_RIGHT_STOP;
	}
	
	//�����
	if(behind_left_speed_duty > 0)//��ǰ
	{
		if(speed_count < behind_left_speed_duty)
		{
			BEHIND_LEFT_GO;
		}	else                //ֹͣ
		{
			BEHIND_LEFT_STOP;
		}
	}
	else if(behind_left_speed_duty < 0)//���
	{
		if(speed_count < (-1)*behind_left_speed_duty)
		{
			BEHIND_LEFT_BACK;
		}	else                //ֹͣ
		{
			BEHIND_LEFT_STOP;
		}
	}
	else                //ֹͣ
	{
		BEHIND_LEFT_STOP;
	}
	
/*		//�Һ���
	if(behind_right_speed_duty > 0)//��ǰ
	{
		if(speed_count < behind_right_speed_duty)
		{
			BEHIND_RIGHT_GO;
		}	else                //ֹͣ
		{
			BEHIND_RIGHT_STOP;
		}
	}
	else if(behind_right_speed_duty < 0)//���
	{
		if(speed_count < (-1)*behind_right_speed_duty)
		{
			BEHIND_RIGHT_BACK;
		}	else                //ֹͣ
		{
			BEHIND_RIGHT_STOP;
		}
	}
	else                //ֹͣ
	{
		BEHIND_RIGHT_STOP;
	}*/

//MOTOR_CLEAN

	//
	if(motor_clean_f_speed_duty  > 0)//��ǰ
	{
		if(speed_count < motor_clean_f_speed_duty )
		{
			MOTOR_CLEAN_F;
		}else                //ֹͣ
		{
			MOTOR_CLEAN_STOP ;
		}
	}
	else if(motor_clean_f_speed_duty < 0)//���
	{
		if(speed_count < (-1)*motor_clean_f_speed_duty)
		{
			MOTOR_CLEAN_F;
		}else                //ֹͣ
		{
			MOTOR_CLEAN_STOP ;
		}
	}
	else                //ֹͣ
	{
		MOTOR_CLEAN_STOP ;
	}


	
}

//��ǰ
void CarGo(uint8_t SPEED_DUTY)
{
	front_left_speed_duty=SPEED_DUTY;
	front_right_speed_duty=SPEED_DUTY;
	behind_left_speed_duty=SPEED_DUTY;
	behind_right_speed_duty=SPEED_DUTY;
}

//����
void CarBack(uint8_t SPEED_DUTY)
{
	front_left_speed_duty=-SPEED_DUTY;
	front_right_speed_duty=-SPEED_DUTY;
	behind_left_speed_duty=-SPEED_DUTY;
	behind_right_speed_duty=-SPEED_DUTY;
}

//����
void CarLeft(uint8_t SPEED_DUTY)
{
	front_left_speed_duty=-20;
	front_right_speed_duty=SPEED_DUTY;
	behind_left_speed_duty=-20;
	behind_right_speed_duty=SPEED_DUTY+10;//���Ӻ���������
}

//����
void CarRight(uint8_t SPEED_DUTY)
{
	front_left_speed_duty=SPEED_DUTY;
	front_right_speed_duty=-20;
	behind_left_speed_duty=SPEED_DUTY+10;//���Ӻ���������
	behind_right_speed_duty=-20;
}

//ֹͣ
void CarStop(uint8_t SPEED_DUTY)
{
	front_left_speed_duty=0;
	front_right_speed_duty=0;
	behind_left_speed_duty=0;
	behind_right_speed_duty=0;
}

void Motor_Clean(uint8_t SPEED_DUTY_CLEAN)
{
	motor_clean_f_speed_duty=SPEED_DUTY_CLEAN;
}



void MotorInit(void)
{
	MotorGPIO_Configuration();
	CarStop(0);
	
	Motor_Clean(0);
}

