#include "motor.h"

void SpeedForward(uint32_t _COMPARE_1, uint32_t _COMPARE_2)
{
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,_COMPARE_1);
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,_COMPARE_2);
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_SET);
}

void SpeedBack(uint32_t _COMPARE_1, uint32_t _COMPARE_2)
{
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,_COMPARE_1);
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,_COMPARE_2);
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_RESET);
}

void TurnLeft(uint32_t _COMPARE_1, uint32_t _COMPARE_2)
{
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,_COMPARE_1);
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,_COMPARE_2);
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_RESET);
}

void TurnRight(uint32_t _COMPARE_1, uint32_t _COMPARE_2)
{
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,_COMPARE_1);
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,_COMPARE_2);
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_SET);
}
void SuspendedTurnLeft(uint32_t _COMPARE_1)
{
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,_COMPARE_1);
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_SET);
}

void SuspendedTurnRight(uint32_t _COMPARE_2)
{
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,_COMPARE_2);
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_SET);
}
void BrakeTurnLeft(uint32_t _COMPARE_1)
{
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,_COMPARE_1);
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_RESET);
}
void BrakeTurnRight(uint32_t _COMPARE_2)
{
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,_COMPARE_2);
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_SET);
}


void LeftTurningStop()
{
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_RESET);
	HAL_Delay(101);
}

void RightTurningStop()
{
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_RESET);
	HAL_Delay(101);
}

void Stop()
{
	HAL_GPIO_WritePin(LEFT_IN1_GPIO_Port, LEFT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEFT_IN2_GPIO_Port, LEFT_IN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN1_GPIO_Port, RIGHT_IN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RIGHT_IN2_GPIO_Port, RIGHT_IN2_Pin, GPIO_PIN_RESET);
}