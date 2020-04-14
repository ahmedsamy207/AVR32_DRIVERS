/*
 * Button_driver_ECU.h
 *
 * Created: 07/04/2020 05:22:34 م
 *  Author: Ahmed SemSem
 */ 


#ifndef BUTTON_DRIVER_ECU_H_
#define BUTTON_DRIVER_ECU_H_

/*
Function Name		 : BUTTON_vInit
Function Returns	 : void
Function Arguments	 : unsigned char port name, unsigned char pin number
Function Description : Define the given pin in the given port as an input pin
*/
	void BUTTON_vInit(u8 port, u8 pin);

/*
Function Name		 : BUTTON_u8read
Function Returns	 : unsigned char
Function Arguments	 : unsigned char port name, unsigned char pin number
Function Description : Return 1 or 0 depend on the status of the button (pressed or not)
*/
	u8 BUTTON_u8read(u8 port, u8 pin);
	
	
#endif /* BUTTON_DRIVER_ECU_H_ */