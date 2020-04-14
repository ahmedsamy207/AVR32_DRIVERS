/*
 * AVR32_DRIVERS.c
 *
 * Created: 05/04/2020 11:19:26 م
 *  Author: Ahmed SemSem
 */ 

#include "LED_driver_ECU.h"
#define F_CPU 8000000UL
#include <util/delay.h>
#include "Data_type.h"
#include "Button_driver_ECU.h"
#include "Seven_Segment_ECU.h"





int main(void)
{
	BUTTON_vInit('A',0);
	GPIO_vconnectpullup('A',0,Connect);
	Seven_Segment_Init(Eight_Bit,'D',Low_Nibble);
	
	while(1)
    {
		u8 i;
		u8 x = BUTTON_u8read('A',0);
		if (x==0)
		{
			for( i=1;i<=9;i++){
				Seven_Segment_Display(Eight_Bit,Low_Nibble,'D',i);
				_delay_ms(1000);
			}
			
		}
		
	}
}