// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "tim.h"

uint16_t prescaler;

void ChangeTime_Down(lv_event_t * e)
{
	// Your code here
}

void ChangeTime_Up(lv_event_t * e)
{
	// Your code here
}

void ChangeTime(lv_event_t * e)
{
	// Your code here
	char buf[10]; 
	lv_dropdown_get_selected_str(ui_Dropdown1, buf, 10);
	
	if (strcmp(buf, "1ms") == 0) 
	{
            // �����ﴦ�� 1ms ���߼�
//	__HAL_TIM_SET_PRESCALER(&htim2, __PRESC__);        
	} 
	else if (strcmp(buf, "5ms") == 0) 
	{
            // �����ﴦ�� 5ms ���߼�
//	__HAL_TIM_SET_PRESCALER(&htim2, __PRESC__);        
	} 
	else if (strcmp(buf, "10ms") == 0) 
	{
            // �����ﴦ�� 10ms ���߼�
//	__HAL_TIM_SET_PRESCALER(&htim2, __PRESC__);
  }
}