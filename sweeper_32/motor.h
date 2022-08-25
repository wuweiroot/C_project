#ifndef __MOTOR_H_
#define __MOTOR_H_

#include "stdint.h"

extern unsigned int speed_count;//ռ�ձȼ����� 50��һ����
extern char front_left_speed_duty;
extern char front_right_speed_duty;
extern char behind_left_speed_duty;
extern char behind_right_speed_duty;

extern char motor_clean_f_speed_duty;
extern char motor_clean_b_speed_duty;

void CarMove(uint8_t );
void CarGo(uint8_t);
void CarBack(uint8_t);
void CarLeft(uint8_t );
void CarRight(uint8_t);
void CarStop(uint8_t );
void MotorInit(void );
void Motor_Clean(uint8_t);
#endif

