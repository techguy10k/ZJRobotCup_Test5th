#ifndef _MOTOR_H
#define _MOTOR_H

#include "gpio.h"
#include "tim.h"

#define LeftIn1GPIO GPIOG
#define LeftIn2GPIO GPIOG
#define RightIn1GPIO GPIOG
#define RightIn2GPIO GPIOG
#define LeftIn1Pin GPIO_PIN_11
#define LeftIn2Pin GPIO_PIN_12
#define RightIn1Pin GPIO_PIN_9
#define RightIn2Pin GPIO_PIN_10

void FullSpeedForward();
void FullSpeedBack();
void TurnLeft();
void TurnRight();
void SuspendedTurnLeft();
void SuspendedTurnRight();
void BrakeTurnLeft();
void BrakeTurnRight();

#endif