#include "InitADC.h"
volatile uint16_t ADC_N[8];
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{

	HAL_ADC_Start_DMA(&hadc1,(uint32_t *)ADC_N,8);
	
}