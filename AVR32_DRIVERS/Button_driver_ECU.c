/*
 * Button_driver_ECU.c
 *
 * Created: 07/04/2020 05:22:56 م
 *  Author: Ahmed SemSem
 */ 
#include "GPIO_MCAL.h"
#define F_CPU 8000000UL
#include "util/delay.h"

void BUTTON_vInit(u8 port, u8 pin){
	GPIO_vsetPIN_DIR(port, pin, 0);
}

u8 BUTTON_u8read(u8 port, u8 pin){
	u8 x;
	x = GPIO_u8read_PIN(port, pin);
	_delay_ms(5);
	x = GPIO_u8read_PIN(port, pin);
	return x;
}