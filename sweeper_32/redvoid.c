#include "redvoid.h"
#include "interface.h"
#include "motor.h"
#include "UltrasonicCtrol.h"

extern char ctrl_comm;

//获取红外避障模块状态
char GetVoidStatus(void)
{
	char left=0,right=0;
	char count;
	if(VOID_L_IO == BARRIER_Y)
	{
		count = 2;
		while(--count)//10ms 采集2次均要采集到前面障碍物信息，滤波
		{
			if(VOID_L_IO == BARRIER_N)
				break;
			Delayms(1);
		}
		if(count == 0) left = 1;
	}
	
	if(VOID_R_IO == BARRIER_Y)
	{
		count = 2;
		while(--count)//10ms 采集2次均要采集到前面障碍物信息，滤波
		{
			if(VOID_R_IO == BARRIER_N)
				break;
			Delayms(1);
		}
		if(count == 0) right = 2;
	}
	
	return left + right;
}

//延时的同时检测红外，一旦发生障碍物，就停止并跳出延时
void DelayCheck(int ms)
{
	while(ms--)
	{
		Delayms(1);
		if(VOID_NONE != GetVoidStatus())
		{
			CarStop(0);
			return;
		}
	}
}

//红外避障处理
//处理方式：左边检测到  后退500ms 右转500ms
//			右边检测到  后退500ms 左转500ms
//			两边检测到  后退700ms 右转500ms
//          没检测到    直行
void VoidRun(uint8_t SPEED_DUTY)
{
	char status;
	status = GetVoidStatus();
	GetDistanceDelay();
	
	if(distance_cm <10) status=5;
	
	switch(status)
	{
		case VOID_LEFT: 
			ctrl_comm = COMM_RIGHT;CarBack(SPEED_DUTY); Delayms(500); CarLeft(SPEED_DUTY); DelayCheck(500);
			break;
		case VOID_RIGHT:
			ctrl_comm = COMM_LEFT;CarBack(SPEED_DUTY); Delayms(500); CarRight(SPEED_DUTY); DelayCheck(500);	
			break;
		case VOID_BOTH:
			ctrl_comm = COMM_RIGHT;CarBack(SPEED_DUTY); Delayms(700); CarRight(SPEED_DUTY); DelayCheck(500);
			break;
		case 5:
			ctrl_comm = COMM_RIGHT;CarBack(SPEED_DUTY); Delayms(500); CarRight(SPEED_DUTY); DelayCheck(500);
			break;
		case VOID_NONE:
			ctrl_comm = COMM_UP;CarGo(SPEED_DUTY);
			break;
		default: break;
	}
}

