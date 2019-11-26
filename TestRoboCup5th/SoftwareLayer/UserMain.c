#include "UserMain.h"
#include "InitADC.h"
#include "stdio.h"
#include "tim.h"
extern volatile uint16_t ADC_N[8];
int tep;
void UserMain(void)
{
	HAL_ADC_Start_DMA(&hadc1,(uint32_t *)ADC_N,8);
	HAL_TIM_Base_Start_IT(&htim8);	
	for(int i=0;i<=8;i++)
	{
		printf("%d",ADC_N[i]);
		
	}
	printf("/n");
	while(1);
}