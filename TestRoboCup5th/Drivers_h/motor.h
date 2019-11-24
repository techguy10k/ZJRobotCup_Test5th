#ifndef _MOTOR_H
#define _MOTOR_H

#include "gpio.h"
#include "tim.h"

void SpeedForward(uint32_t _COMPARE_1, uint32_t _COMPARE_2);
void SpeedBack(uint32_t _COMPARE_1, uint32_t _COMPARE_2);
void TurnLeft(uint32_t _COMPARE_1, uint32_t _COMPARE_2);
void TurnRight(uint32_t _COMPARE_1, uint32_t _COMPARE_2);
void SuspendedTurnLeft(uint32_t _COMPARE_1);
void SuspendedTurnRight(uint32_t _COMPARE_2);
void BrakeTurnLeft(uint32_t _COMPARE_1);
void BrakeTurnRight(uint32_t _COMPARE_2);
void LeftTurningStop();
void RightTurningStop();
void Stop();

#endif