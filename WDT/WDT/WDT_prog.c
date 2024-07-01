/*
 * WDT_reg.c
 *
 * Created: 6/22/2024 10:57:27 AM
 *  Author: ahmed
 */ 
#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "WDT_reg.h"

/*********** Function to set WDT value ***********/
void WDT_voiSetVal(u8 copy_u16value){
	
	WDTCR_REG &=0b11111000;
	WDTCR_REG |= copy_u16value;
	
	SET_BIT(WDTCR_REG,3);
	
	
	
}

/********* Function to Stop WDT *************/

void WDT_voidStop(void){
	WDTCR_REG |=1<<4|1<<3;
	CLR_BIT(WDTCR_REG,3);
	
	
}