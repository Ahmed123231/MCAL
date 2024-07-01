/*
 * Led_prog.c
 *
 * Created: 5/10/2024 10:03:45 PM
 *  Author: ahmed
 */

#include "BIT_MATH.h"
#include "STD_TYPE.h" 
#include "DIO_interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>



/************ Turn LED ON ************/
void LED_voidLedOn (u8 copy_u8port ,u8 copy_u8pin){
	
		 /******** SET LED DIRECTION **********/
		 DIO_voidSetPinDir(copy_u8port ,copy_u8pin ,OUTPUT);
		  /******** SET LED ON **********/
		 DIO_voidSetPinVal(copy_u8port ,copy_u8pin ,HIGH);
	
	
}

/************ Turn LED OFF ************/
void LED_voidLedOff (u8 copy_u8port ,u8 copy_u8pin){
	
		DIO_voidSetPinDir(copy_u8port ,copy_u8pin ,OUTPUT);
		DIO_voidSetPinVal(copy_u8port ,copy_u8pin ,LOW);
}

/************ TOGGLE LEd LED  ************/
void LED_voidLedToggle (u8 copy_u8port ,u8 copy_u8pin){
	
		DIO_voidSetPinDir(copy_u8port ,copy_u8pin ,OUTPUT);
		
		DIO_voidSetPinVal(copy_u8port ,copy_u8pin ,HIGH);
		_delay_ms(500);
		DIO_voidSetPinVal(copy_u8port ,copy_u8pin ,LOW);
		_delay_ms(500);
		
		
		
	
}