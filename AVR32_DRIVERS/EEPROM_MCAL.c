/*
 * EEPROM_MCAL.c
 *
 * Created: 12/04/2020 01:59:12 م
 *  Author: Ahmed SemSem
 */ 

#include "Register.h"
#include "std_macros.h"
#include "Data_type.h"


void EEPROM_Write(u16 address , u8 value){
	myEEARL = (u8)address;
	myEEARH= (u8)(address>>8);
	myEEDR = value;
	SET_BIT(myEECR , myEEMWE);
	SET_BIT(myEECR , myEEWE);
	while(READ_BIT(myEECR , myEEWE)==1);
}



u8 EEPROM_Read(const u16 address){
	myEEARL = (u8)address;
	myEEARH = (u8)(address>>8);
	SET_BIT(myEECR , myEERE);
	return myEEDR;
}