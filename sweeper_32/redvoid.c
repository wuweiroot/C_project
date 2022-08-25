#include "redvoid.h"
#include "interface.h"
#include "motor.h"
#include "UltrasonicCtrol.h"

extern char ctrl_comm;

//��ȡ�������ģ��״̬
char GetVoidStatus(void)
{
	char left=0,right=0;
	char count;
	if(VOID_L_IO == BARRIER_Y)
	{
		count = 2;
		while(--count)//10ms �ɼ�2�ξ�Ҫ�ɼ���ǰ���ϰ�����Ϣ���˲�
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
		while(--count)//10ms �ɼ�2�ξ�Ҫ�ɼ���ǰ���ϰ�����Ϣ���˲�
		{
			if(VOID_R_IO == BARRIER_N)
				break;
			Delayms(1);
		}
		if(count == 0) right = 2;
	}
	
	return left + right;
}

//��ʱ��ͬʱ�����⣬һ�������ϰ����ֹͣ��������ʱ
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

//������ϴ���
//����ʽ����߼�⵽  ����500ms ��ת500ms
//			�ұ߼�⵽  ����500ms ��ת500ms
//			���߼�⵽  ����700ms ��ת500ms
//          û��⵽    ֱ��
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

