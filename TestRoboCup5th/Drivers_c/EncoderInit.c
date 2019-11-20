#include "EncoderInit.h"
void EncoderInit(void)
{
	TIM_Encoder_InitTypeDef EncoderInit;
	EncoderInit.EncoderMode  = TIM_ENCODERMODE_TI12;
	
	EncoderInit.IC1Polarity  = TIM_INPUTCHANNELPOLARITY_RISING;
	EncoderInit.IC1Selection = TIM_IT_CC1;
	EncoderInit.IC1Filter    = 0;
	EncoderInit.IC1Prescaler = 0;
	
	EncoderInit.IC2Polarity  = TIM_INPUTCHANNELPOLARITY_RISING;
	EncoderInit.IC2Selection = TIM_IT_CC2;
	EncoderInit.IC2Filter    = 0;
	EncoderInit.IC2Prescaler = 0;
	
	HAL_TIM_Encoder_Init(&htim1,&EncoderInit);
	HAL_TIM_Encoder_Start_IT(&htim1,TIM_CHANNEL_1);
	HAL_TIM_Encoder_Start_IT(&htim1,TIM_CHANNEL_2);
	
	HAL_TIM_Encoder_Init(&htim3,&EncoderInit);
	HAL_TIM_Encoder_Start_IT(&htim3,TIM_CHANNEL_1);
	HAL_TIM_Encoder_Start_IT(&htim3,TIM_CHANNEL_2);
	
	HAL_TIM_Encoder_Init(&htim4,&EncoderInit);
	HAL_TIM_Encoder_Start_IT(&htim4,TIM_CHANNEL_1);
	HAL_TIM_Encoder_Start_IT(&htim4,TIM_CHANNEL_2);
	
	HAL_TIM_Encoder_Init(&htim8,&EncoderInit);
	HAL_TIM_Encoder_Start_IT(&htim8,TIM_CHANNEL_1);
	HAL_TIM_Encoder_Start_IT(&htim8,TIM_CHANNEL_2);
	
	
	HAL_TIM_PWM_Init(&htim2);
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1 | TIM_CHANNEL_2);
	//HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);
}