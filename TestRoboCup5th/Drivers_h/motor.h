#ifndef _MOTOR_H
#define _MOTOR_H

#include "gpio.h"

void FullSpeedForward();
void FullSpeedBack();
void TurnLeft();
void TurnRight();
void SuspendedTurnLeft();
void SuspendedTurnRight();
void BrakeTurnLeft();
void BrakeTurnRight();
void Stop();

#endif